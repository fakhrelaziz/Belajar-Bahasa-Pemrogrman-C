#include <stdio.h>

int main(){
     /*Mengakses element array dan meninta pengguna masukkan data 
     dengan menggunakan for loop*/
     int ukuran;
     printf("Masukkan ukuran(jumlah) data: ");
     scanf("%d", &ukuran);
     int arr[ukuran];
     for (int i = 0; i < ukuran; i++)
     {
          printf("Masukkan data ke-%d: ", i+1);
          scanf("%d", &arr[i]);
     }
     

     for (int i = 0; i < ukuran; i++)
     {
          printf("Array[%d]: %d\n", i , arr[i]);
     } 

     int total = 0;
     for (int i = 0; i < ukuran; i++)
     {
          total += arr[i];
          printf("total: %d\n", total);
     }
     printf("total: %d\n", total);
     printf("rata-rata: %d\n", total/ukuran);

     return 0;
}