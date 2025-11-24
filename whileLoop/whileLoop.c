#include <stdio.h>

int main(){
     int angka = 1;
     char ulang; 
          while (angka != 0 || ulang == 'y' || ulang == 'Y'){
               printf("Masukkan angka 0 untuk keluar: ");
               scanf("%d", &angka);
               printf("Kamu telah keluar dari Loop");
             
               printf("\nApakah kamu ingin ngulang?(y/t): ");
               scanf(" %c", &ulang);
               
          }
          
     
     
     return 0;
}