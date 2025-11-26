#include <stdio.h>

int main(){
     int angka = 1;
     char ulang = 'y';
     while (ulang == 'y'){

          while (angka != 0){
               printf("Masukkan angka 0 untuk keluar: ");
               scanf("%d", &angka);
               if (angka != 0){
                    printf("kamu tidak bisa keluar sebelum ketik 0\n");
               }
                    
                    
          }
          printf("Kamu telah keluar dari Loop");
          printf("\nApakah kamu ingin ngulang?(y/t): ");
          scanf(" %c", &ulang);
          if(ulang == 'Y'|| ulang == 'y'){angka = 1;}
          else if(ulang == 't') {ulang != 'y';}
               
               
               
          
     }
        printf("=== SELESAI ===");
          
     
     
     return 0;
}