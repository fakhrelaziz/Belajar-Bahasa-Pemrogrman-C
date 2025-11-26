#include <stdio.h>

int main(){
    //tabel perkalian setiap angka dari 1 - 10
     int total = 0;
     for (int i = 1; i <= 10; i++)
     {    
          for (int j = 1; j <= 10; j++)
          {
               printf("%-3d", i * j);
               total += i * j;
          } 
          printf("\n");
          
     }
     printf("total: %d", total);
     
     return 0;


}
