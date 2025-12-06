#include <stdio.h>

int main(){
     int id;
     int brg[9] = {10, 20, 30, 40, 50, 60, 70, 80, 90};
     int temp= 0;
     printf("Masukkan angka: ");
     scanf("%d", &id);
     for(int i=0; i< 9; i++){
          printf("Loop ke-%d, cek brg[%d]\n", i, i);
          if(id == brg[i]){
          printf("Loop ke-%d, cek brg[%d]\n", i, i);
               temp = 1;
               /*break; menggunakan break akan menghentikan paksa looping ketika
                        kondisi dari if bernilai true(id == br[1])*/
               //jika tanpa break ketika kondisi true for loop akan terus looping sampai kondisi dari for loop false              
        }
    }
     if(temp){
          printf("Angka ditemukan");
        
     }else{
        printf("Tidak ditemukan");
     }
     return 0;
}