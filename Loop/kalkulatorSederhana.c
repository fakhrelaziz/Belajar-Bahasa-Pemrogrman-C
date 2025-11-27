#include <stdio.h>
int main(void) {
    char choice;
    float a, b, result;
    int running = 1;
    
     while (running) {
        printf("\n=== KALKULATOR SEDERHANA ===\n");
        printf("+ : Penjumlahan\n");
        printf("- : Pengurangan\n");
        printf("* : Perkalian\n");
        printf("/ : Pembagian\n");
        printf("q : Keluar\n");
        printf("Pilih operasi: ");
        scanf(" %c", &choice);
        
        if (choice != 'q')
        {
            printf("Masukkan angka pertama: ");
            scanf("%f", &a);
            printf("Masukkan angka kedua: ");
            scanf("%f", &b);
        }
        
        switch (choice) {
            case '+':
                result = a + b;
                printf("%.2f + %.2f = %.2f\n", a, b, result);
                break;
            case '-':
                result = a - b;
                printf("%.2f - %.2f = %.2f\n", a, b, result);
                break;
            case '*':
                result = a * b;
                printf("%.2f * %.2f = %.2f\n", a, b, result);
                break;
            case '/':
                if (b != 0) {
                    result = a / b;
                    printf("%.2f / %.2f = %.2f\n", a, b, result);
                } else {
                    printf("Error: Pembagian dengan nol!\n");
                }
                break;
            case 'q':
                if (choice == 'q' || choice == 'Q') {
                    printf("Terima kasih!\n");
                }
                running = 0;
                break;
                
            default:
                printf("Operasi tidak valid!\n");
        }
        
    }
    
    return 0;
}
