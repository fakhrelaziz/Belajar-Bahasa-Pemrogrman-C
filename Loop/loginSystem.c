#include <stdio.h>

int main(){
     int password;
     int passwordAnda = 12345678;
     
     while (password != passwordAnda)
     {
          printf("\nMasukkan Password Anda: ");
          scanf("%d", &password);
          if (password != passwordAnda)
          {
               printf("Password salah masukkan ulang!\n");
          }
          
     }
     printf("Password Anda Benar");
     return 0;
}