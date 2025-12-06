#include <stdio.h>

int main(){
     int arr[] = {1, 2, 3, 4, 5};
     int n = 5;
     int left = 0;
     int right = n - 1;


     printf("array asli: ");
     for (int i = 0; i < n; i++)
     {
          printf("%d ", arr[i]);
     }
     printf("\n");
     while (left < right)
     {
      int temp = arr[left];
      arr[left] = arr[right];
      arr[right]= temp;
      
      left++;
      right--;
     }

     printf("array reverse: ");
     for (int i = 0; i < n; i++)
     {
          printf("%d ", arr[i]);
     }
     
     return 0;
}