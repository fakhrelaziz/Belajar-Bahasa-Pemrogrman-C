/*switch case ini lebih baik digunakan ketika satu variabel memiliki banyak pilihan
seperti contoh pada kasus dibawah lebih clean ketika menggunakan switch case dibanding If-else
 */


#include <stdio.h>

int main(){
     int pilih;
     printf("======== MENU MAKANAN ========\n");
     printf("1. Nasi Goreng\n2. Bakso Kuah\n3. Mie Ayam\n4. Soto Ayam\n");
     printf("==============================\n");
     printf("Masukkan angka untuk memesan: ");
     scanf("%d", &pilih);

     switch(pilih){
          case 1:
          printf("Kamu memesan: Nasi Goreng");
          break;
          case 2:
          printf("Kamu memesan: Bakso Kuah");
          break;
          case 3:
          printf("Kamu memesan: Mie Ayam");
          break;
          case 4:
          printf("Kamu memesan: Soto Ayam");
          break;
     default:
          printf("Input tidak Valid");
     }    
     return 0;
}