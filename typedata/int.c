/*ada berbagai jenis tipe data integer 
1. int --> 4 byte (32 bit) -2M an sampai 2M an
     ada yang namanya signed, unsigned
     signed bisa di isi nilai positif atau negatif
     unsigned hanya bisa diisi nilai positif saja
     contih: unsigned int nilai = 40;
     kalau diisi nilai negatif -40 maka outputnya tetap positif 40

2. short --> 2 byte (16 bit)  -32rb an sampai 32rb an
     sama ada signed dan unsigned
     contoh: short nilai = 40

3. long --> 4 byte (32 bit) 8 byte (64 bit) nilai nya lebih besar dari int
     signed, unsigned
     contoh: long nilai = 40

4. long long --> 8 byte (64 bit) lebih tinggi lagi nilai yang bisa isi
*/




#include <stdio.h>

int main(){
     int biasa = 10;
     unsigned int hitung = 40;  
     printf("biasa: %d\n", biasa);
     printf("hitung: %u\n", hitung);

     short nilai = 30000;
     printf("nilai: %hd\n", nilai);

     long populasi = 2000000000;
     printf("populasi: %ld\n", populasi);

     long long populasi2 = 12345678912345689 ;
     printf("populasi: %lld", populasi2);
     return 0;
}