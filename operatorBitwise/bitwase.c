//bitwise ini digunakan untuk memanipulasi dan perhitungan pada low level atau biner


// & --> a & b , (dan) kedua bit bernilai 1 maka hasil akan 1 
// | --> a | b , (atau) salah satu bit nya adalah 1 maka hasilnya akan 1
// ^ --> a ^ b , (XOR) menetapkan bit ke 1 hanya jika setidaknya satu bit adalah 1
// ~ --> a ~ b , (NOT) membalikkan semua bit
// << --> a << b , Menggeser bit ke kiri (dikalikan dengan pangkat 2)
// >> --> a >> b , Menggeser bit ke kanan 9membagi dengan pangkat 2)

#include <stdio.h>

int main(){
     int a = 6; // 0110 --> biner
     int b = 3; // 0011 --> biner
     int hasil = a & b; // 0110 & 0011 = 0010 (membandindingkan setiap kolom atau bit dari kedua biner)
     int hasil2 = a | b;
     int hasil3 = a ^ b; //setiap bit berbeda maka akan 1
     int hasil4 = ~a; // 0110 menjadi 1001
     int hasil5 = a << b; // 0110 digeser menjadi 1100 = 12 kemudian dikali 3 
     int hasil6 = a >> b; // 0110 digeser menjadi 0011 = 3 kemudian dibagi 3 

     printf("Maka hasilnya:\n%d\n%d\n%d\n%d\n%d\n%d\n", hasil, hasil2,hasil3,hasil4,hasil5,hasil6);
     return 0;
}