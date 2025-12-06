#include <stdio.h>

int main(){
     int arr[10] = {20, 43, 50, 68, 54, 23, 53, 85, 76, 15};
     int max = arr[0];
     int min = arr[0];
     for (int i = 0; i < 10; i++)
     {
          if (arr[i] > max)
          {
               max = arr[i];
               
          }else if (arr[i] < min)
          {
               min = arr[i];
          }
          
          
     }
     printf("Nilai maksimal: %d\n", max);
     printf("Nilai minimal: %d\n", min);
     return 0;
}