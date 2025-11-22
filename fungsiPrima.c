#include <stdio.h>
#include <stdbool.h>

bool isPrima(int angka){
     if (angka < 2){
          return false;
     }else if (angka == 2){
          return true;
     }else if (angka % 2 == 0){
          return false;
     }else {
          for (int i = 3; i * i <= angka; i += 2){
               if (angka % i == 0){
                    return false;
               }
          }
     }    
     return true;
}

int main(){
     // Deklarasi
     int N;
     // Algoritma
     printf("Masukan jumlah bilangan: ");
     scanf("%d", &N);
     for (int i = 2; i <= N; i++){
          if (isPrima(i)){
               printf("%d ", i);
          }
     }

     return 0;
}

/* kalau mau speed up 10x untuk N yang besar (misal N = 1,000,000), ada algoritma namanya Sieve of Eratosthenes.
teknik ini yang sering keluar di competitive programming!
*/