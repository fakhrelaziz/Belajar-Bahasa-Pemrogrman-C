#include <stdio.h>

int main(){
     int x, y;
     
     printf("Masukkan jumlah baris: ");
     scanf("%d", &x);
     printf("Masukkan jumlah kolom: ");
     scanf("%d", &y);
     int arr[x][y];

     //kalau array 2 dimensi mengisi element dengan menggunakan perulangan bercabang
     printf("Masukkan element:\n");
     for (int i = 0; i < x ; i++)
     {
          for (int j = 0; j < y ; j++)
          {
               printf("arr[%d][%d]: ", i, j);
               scanf("%d", &arr[i][j]);
          }
          
     }
     

     for (int i = 0; i < 3 ; i++)
     {
          for (int j = 0; j < 3; j++)
          {
               printf("%d", arr[i][j]);
          }
          printf("\n");
     }
     
     return 0;
}