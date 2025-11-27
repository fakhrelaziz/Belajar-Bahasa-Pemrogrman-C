#include <stdio.h>

int main(){
     int n, batasTengah;
     do
     {
          printf("Masukkan Angka Ganjil: ");
          scanf("%d", &n);
          if (n % 2 == 0)
          {
               printf("Invalid Masukkan Angka Ganjil");
          }
          
     } while (n % 2 == 0);
     
     batasTengah = (n / 2) + 1;

     for (int i = 1; i <= batasTengah; i++)
     {
          for (int j = i; j <= batasTengah; j++)
          {
               printf(" ");
          }
          for (int k = 1; k <= 2*i -1; k++)
          {
              printf("*");
          }
          
          printf("\n"); 
     }

     for (int i = 2; i <= batasTengah; i++)
          {   
               for (int j = 1; j <= i; j++)
               {
                    printf(" ");
               }
               for (int k = 2*i; k <= batasTengah * 2; k++)
               {   
                    printf("*");
               }
               
               printf("\n");  
          }
     
     return 0;
}