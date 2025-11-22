#include <stdio.h>

int main (){
     int suhu ;
     printf("Suhu berapa?: ");
     scanf("%d", &suhu);
//bisa gunakan logika seperti ini jika hanya ada 2 pilihan saja,kalau kompleks bisa pakai if biasa
//kondisi ? nilai_TRUE : nilai_FALSE
     printf("Suhu %d cuaca %s", suhu, (suhu > 30)/*kondisi*/ ? /*TRUE*/"PANAS" : /*FALSE*/"DINGIN");
     

     return 0;


}