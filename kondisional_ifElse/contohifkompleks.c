#include <stdio.h>
#include <stdbool.h>
#include <string.h>

// Enum untuk status
enum PaymentMethod { CREDIT_CARD, DEBIT_CARD, EWALLET, COD, BANK_TRANSFER };
enum CustomerTier { REGULAR, SILVER, GOLD, PLATINUM };
enum ShippingZone { LOCAL, REGIONAL, INTERNATIONAL };

typedef struct {
    double totalAmount;
    enum PaymentMethod paymentMethod;
    enum CustomerTier customerTier;
    enum ShippingZone shippingZone;
    bool hasPromoCode;
    bool isFirstOrder;
    bool isPeakHour;
    int itemCount;
    double weight;
    bool isFragile;
    bool hasInsurance;
} Order;

double calculateFinalPrice(Order order) {
    double finalPrice = order.totalAmount;
    double discount = 0.0;
    double shippingCost = 0.0;
    double processingFee = 0.0;
    double insuranceFee = 0.0;
    
    // ========== DISCOUNT LOGIC (SUPER COMPLEX!) ==========
    
    // 1. Customer Tier Discount
    if (order.customerTier == PLATINUM) {
        if (order.totalAmount >= 1000000) {
            discount = order.totalAmount * 0.20;  // 20% for platinum + high value
        } else if (order.totalAmount >= 500000) {
            discount = order.totalAmount * 0.15;  // 15% for platinum + medium value
        } else {
            discount = order.totalAmount * 0.10;  // 10% for platinum
        }
    } else if (order.customerTier == GOLD) {
        if (order.totalAmount >= 500000) {
            discount = order.totalAmount * 0.12;
        } else {
            discount = order.totalAmount * 0.08;
        }
    } else if (order.customerTier == SILVER) {
        discount = order.totalAmount * 0.05;
    }
    
    // 2. First Order Bonus (stacks with tier discount!)
    if (order.isFirstOrder) {
        if (order.totalAmount >= 200000) {
            discount = 50000;  // Flat 50k discount
        } else {
            discount = order.totalAmount * 0.10;  // 10% discount
        }
    }
    
    // 3. Promo Code (can stack or override depending on conditions)
    if (order.hasPromoCode) {
        double promoDiscount = order.totalAmount * 0.15;
        
        // Promo code overrides tier discount if higher
        if (promoDiscount > discount) {
            discount = promoDiscount;
        } else {
            // Stack 50% of promo if tier discount is already good
            discount = promoDiscount * 0.5;
        }
    }
    
    // 4. Bulk Order Discount
    if (order.itemCount >= 10) {
        if (order.itemCount >= 50) {
            discount = order.totalAmount * 0.08;  // 8% for 50+ items
        } else if (order.itemCount >= 20) {
            discount = order.totalAmount * 0.05;  // 5% for 20-49 items
        } else {
            discount = order.totalAmount * 0.03;  // 3% for 10-19 items
        }
    }
    
    // Cap discount at 50% of total (business rule!)
    if (discount > order.totalAmount * 0.50) {
        discount = order.totalAmount * 0.50;
    }
    
    // ========== SHIPPING COST LOGIC ==========
    
    if (order.shippingZone == LOCAL) {
        if (order.weight <= 1.0) {
            shippingCost = 10000;
        } else if (order.weight <= 5.0) {
            shippingCost = 15000;
        } else if (order.weight <= 10.0) {
            shippingCost = 25000;
        } else {
            shippingCost = 25000 + ((order.weight - 10.0) * 3000);
        }
        
        // Free shipping for high tier + high value
        if ((order.customerTier == PLATINUM && order.totalAmount >= 500000) ||
            (order.customerTier == GOLD && order.totalAmount >= 1000000)) {
            shippingCost = 0;
        }
        
    } else if (order.shippingZone == REGIONAL) {
        shippingCost = 50000 + (order.weight * 5000);
        
        // Regional has minimum shipping cost
        if (shippingCost < 50000) {
            shippingCost = 50000;
        }
        
    } else if (order.shippingZone == INTERNATIONAL) {
        shippingCost = 200000 + (order.weight * 15000);
        
        // International shipping not free even for platinum
        // But platinum gets 30% discount
        if (order.customerTier == PLATINUM) {
            shippingCost *= 0.70;
        } else if (order.customerTier == GOLD) {
            shippingCost *= 0.85;
        }
    }
    
    // Fragile item surcharge
    if (order.isFragile) {
        if (order.shippingZone == INTERNATIONAL) {
            shippingCost += 100000;
        } else if (order.shippingZone == REGIONAL) {
            shippingCost += 30000;
        } else {
            shippingCost += 15000;
        }
    }
    
    // ========== PAYMENT METHOD FEES ==========
    
    if (order.paymentMethod == CREDIT_CARD) {
        // Credit card: 2.5% fee
        processingFee = (order.totalAmount - discount + shippingCost) * 0.025;
        
        // Waive fee for platinum during off-peak
        if (order.customerTier == PLATINUM && !order.isPeakHour) {
            processingFee = 0;
        }
        
    } else if (order.paymentMethod == DEBIT_CARD) {
        // Debit card: flat 5000
        processingFee = 5000;
        
    } else if (order.paymentMethod == EWALLET) {
        // E-wallet: 1.5% fee but capped at 20000
        processingFee = (order.totalAmount - discount + shippingCost) * 0.015;
        if (processingFee > 20000) {
            processingFee = 20000;
        }
        
        // E-wallet cashback during peak hours!
        if (order.isPeakHour) {
            discount += 10000;  // Extra 10k cashback
        }
        
    } else if (order.paymentMethod == COD) {
        // COD: higher fee + restricted for high value
        if (order.totalAmount > 5000000) {
            printf("ERROR: COD not available for orders > 5 million\n");
            return -1;
        }
        
        processingFee = 15000;  // Flat COD fee
        
        // COD not available for international
        if (order.shippingZone == INTERNATIONAL) {
            printf("ERROR: COD not available for international shipping\n");
            return -1;
        }
        
    } else if (order.paymentMethod == BANK_TRANSFER) {
        // Bank transfer: free but no instant discount
        processingFee = 0;
        
        // Remove first order discount for bank transfer
        if (order.isFirstOrder) {
            discount -= (order.totalAmount >= 200000) ? 50000 : (order.totalAmount * 0.10);
            if (discount < 0) discount = 0;
        }
    }
    
    // ========== INSURANCE ==========
    
    if (order.hasInsurance) {
        // Insurance: 2% of item value
        insuranceFee = order.totalAmount * 0.02;
        
        // Minimum insurance fee
        if (insuranceFee < 10000) {
            insuranceFee = 10000;
        }
        
        // Insurance mandatory for international fragile items
        if (order.shippingZone == INTERNATIONAL && order.isFragile) {
            // Already has insurance, good!
        }
    } else {
        // Check if insurance is mandatory
        if (order.shippingZone == INTERNATIONAL && order.isFragile) {
            printf("ERROR: Insurance is mandatory for international fragile items\n");
            return -1;
        }
    }
    
    // ========== PEAK HOUR SURCHARGE ==========
    
    if (order.isPeakHour) {
        // Peak hour surcharge: 10% on shipping (except platinum)
        if (order.customerTier != PLATINUM) {
            shippingCost *= 1.10;
        }
    }
    
    // ========== FINAL CALCULATION ==========
    
    finalPrice = order.totalAmount - discount + shippingCost + processingFee + insuranceFee;
    
    // Minimum order value check
    if (finalPrice < 50000) {
        printf("ERROR: Minimum order value is 50,000 after all calculations\n");
        return -1;
    }
    
    // Print breakdown (for transparency)
    printf("\n========== ORDER BREAKDOWN ==========\n");
    printf("Subtotal:        Rp %13.2f\n", order.totalAmount);
    printf("Discount:        Rp %13.2f\n", -discount);
    printf("Shipping:        Rp %13.2f\n", shippingCost);
    printf("Payment Fee:     Rp %13.2f\n", processingFee);
    printf("Insurance:       Rp %13.2f\n", insuranceFee);
    printf("=====================================\n");
    printf("TOTAL:           Rp %13.2f\n", finalPrice);
    printf("=====================================\n");
    
    return finalPrice;
}

int main(void) {
    // Test Case 1: Platinum Customer, High Value, International
    Order order1 = {
        .totalAmount = 2000000,
        .paymentMethod = CREDIT_CARD,
        .customerTier = PLATINUM,
        .shippingZone = INTERNATIONAL,
        .hasPromoCode = true,
        .isFirstOrder = false,
        .isPeakHour = false,
        .itemCount = 3,
        .weight = 2.5,
        .isFragile = true,
        .hasInsurance = true
    };
    
    printf("===== TEST CASE 1: PLATINUM INTERNATIONAL =====\n");
    double final1 = calculateFinalPrice(order1);
    printf("Final Price: Rp %.2f\n\n", final1);
    
    // Test Case 2: Regular Customer, First Order, Local, E-Wallet
    Order order2 = {
        .totalAmount = 150000,
        .paymentMethod = EWALLET,
        .customerTier = REGULAR,
        .shippingZone = LOCAL,
        .hasPromoCode = false,
        .isFirstOrder = true,
        .isPeakHour = true,
        .itemCount = 2,
        .weight = 0.5,
        .isFragile = false,
        .hasInsurance = false
    };
    
    printf("===== TEST CASE 2: REGULAR FIRST ORDER =====\n");
    double final2 = calculateFinalPrice(order2);
    printf("Final Price: Rp %.2f\n\n", final2);
    
    // Test Case 3: Gold, Bulk Order, Regional
    Order order3 = {
        .totalAmount = 800000,
        .paymentMethod = BANK_TRANSFER,
        .customerTier = GOLD,
        .shippingZone = REGIONAL,
        .hasPromoCode = true,
        .isFirstOrder = false,
        .isPeakHour = false,
        .itemCount = 25,
        .weight = 8.0,
        .isFragile = false,
        .hasInsurance = false
    };
    
    printf("===== TEST CASE 3: GOLD BULK ORDER =====\n");
    double final3 = calculateFinalPrice(order3);
    printf("Final Price: Rp %.2f\n\n", final3);
    
    return 0;
}