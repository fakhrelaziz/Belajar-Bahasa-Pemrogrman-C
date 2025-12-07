#include <stdio.h>

int main(){
     int arr[5] = {20, 12, 34, 56, 29};

     printf("Sebelum di urutkan\n");
     for (int i = 0; i < 5; i++)
     {
          printf("%d ", arr[i]);
     }
     printf("\n");     
     
     for (int i = 0; i < 5; i++)
     {
          for (int j = 0; j < 5 - i   ; j++)
          {
               if (arr[j] > arr[j + 1])
               {
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
               }
               printf("tes %d\n", j);
               
               
          }
          printf("debug %d\n", i);
     }
     printf("\nSetelah diurutkan\n");
     for (int i = 0; i < 5; i++)
     {
          printf("%d ", arr[i]);
     }
     
     return 0;
}