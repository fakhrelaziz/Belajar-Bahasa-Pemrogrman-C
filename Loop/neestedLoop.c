#include <stdio.h>

int main(){
     //pola bintang segitiga siku-siku

     //cara 1 (menyelesaikan persoalan tanpa Ai)
      for (int i = 5; i > 0; i--)
     {    
          for (int j = i; j < 5 && j > 0; j++)
          {
               printf("* ");
          } 
          printf("*\n");
     }
     printf("\n");

     //Cara 2 (ternyata ada yang lebih simpel)

     for (int i = 1; i <= 5; i++)
     {    
          for (int j = 1; j <= i ; j++)
          {
               printf("* ");
          } 
          printf("\n");
     }
     
     printf("\n");

      for (int i = 1; i <= 5; i++)
     {    
          for (int j = i; j <= 5 ; j++)
          {
               printf("* ");
          } 
          printf("\n");
     }
     
     printf("\n");

     //Piramid
      for (int i = 1; i <= 5; i++)
     {    
          for (int j = i; j <= 5 ; j++)
          {
               printf("  ");
          } 
          for (int k = 1; k <= 2*i - 1; k++)
          {
               printf("* ");
          }
          printf("\n");
     }
     printf("\n");

     //Persegi
      for (int i = 1; i <= 5; i++)
     {    
          for (int j = i; j <=5 ; j++)
          {
               printf("* ");
          } 
          for (int k = 1; k <= i - 1; k++)
          {
               printf("* ");
          }
          printf("\n");
     }
     
     return 0;


}



/* i=0 j=0
i=0 j=1
i=0 j=2
i=1 j=1
i=1 j=2
i=2 j=2
*/