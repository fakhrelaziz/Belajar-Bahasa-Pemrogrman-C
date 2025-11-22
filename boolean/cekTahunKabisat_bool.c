#include <stdio.h>
#include <stdbool.h>

bool cekTahunKabisat(int tahun){
     bool kabisat = (tahun % 4 == 0 && tahun % 100 != 0) || tahun % 400 == 0;
     return kabisat; //Mengembalikan Nilai boolean 0 atau 1

     // Atau cara ke dua lebih simpel
     //return (tahun % 4 == 0 && tahun % 100 != 0) || tahun % 400 == 0; 
     // langsung return 0 atau 1 tanpa varibel
}

int main(){
     printf("\n====CEK TAHUN KABISAT====\n");
     int tahun;
     int hasil;
     printf("Inputkan Tahun: ");
     scanf("%d", &tahun);
     
     if (cekTahunKabisat(tahun)){//Jika 1 maka jalankan
          printf("%d adalah Tahun Kabisat", tahun);
     }else { //Jika 0 maka jalankan
          printf("%d BUKAN Tahun Kabisat", tahun);
     }

     return 0;

}