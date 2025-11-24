#include <stdio.h>

int main(){
     printf("\n====CEK TAHUN KABISAT====\n");
     int tahun;
     printf("Inputkan Tahun: ");
     scanf("%d", &tahun);

     /* KALAU MENGGGUNAKAN LOGIKA OPERATOR
     if ((tahun % 4 == 0 || tahun % 100 == 0) && tahun % 400 == 0){
          printf("Maka tahun %d adalah tahun kabisat", tahun);
     }else {
          printf("tahun %d bukan kabisat", tahun);
     }
     */
     if (tahun % 4 == 0){
          if (tahun % 100 == 0)
          {
               if (tahun % 400 == 0)
               {
                    printf("Tahun %d adalah tahun Kabisat", tahun);
               }else {printf("Tahun %d adalah BUKAN tahun Kabisat", tahun);}
               
          }else { printf("Tahun %d adalah tahun Kabisat", tahun);}
               
          
     }else {printf("Tahun %d adalah BUKAN tahun Kabisat", tahun);}
     
     /*MENGUNAKAN TERNARY lOGIKA
     printf("%d %s tahun kabisat\n", 
           tahun, ((tahun % 4 == 0 && tahun % 100 != 0) || tahun % 400 == 0)
           ? "adalah" :"BUKAN");
     */      
     return 0;

}