#include <stdio.h>

int main(void) {
    int angka, count = 0;
    
    printf("Masukkan angka: ");
    scanf("%d", &angka);
    
    int temp = angka;
    
    while (temp != 0) {
        temp /= 10;  // karena operator div(/) angk selalu mengahasilkan bilangan bulat conth: 1234,5 jadinnya 1234 , jadi buang digit terakhir
        count++;
    }
    
    printf("Angka %d memiliki %d digit\n", angka, count);
    
    return 0;
}
