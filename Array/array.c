#include <stdio.h>

int main(){
     
     int ukuran;
     printf("Masukka ukuran data: ");
     scanf("%d", &ukuran);
     int arr[ukuran];
     for (int i = 0; i < ukuran; i++)
     {
          printf("Masukkan data ke-%d: ", i+1);
          scanf("%d", &arr[i]);
     }
     

     for (int i = 0; i < ukuran; i++)
     {
          printf("Array[%d]: %d\n", i + 1, arr[i]);
     }
     
     return 0;
}