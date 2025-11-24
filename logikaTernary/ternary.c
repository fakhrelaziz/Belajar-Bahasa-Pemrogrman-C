//cara lain dalam membandingkan kondisis tanpa menggunakan IF-else
// cara ini hanya bisa digunakan hanya jika terdapat 2 kondisi saja
// jika kondisi terlalu kompleks bisa gunakan IF-ELSE


#include <stdio.h>


/*bool cekGanjilGenap( int n){
     int genap = ((n % 2) == 0);
     return genap;
}*/

int main (){

     /*int n;
     printf("Masukkan Angka: ");
     scanf("%d", &n);
     printf("%d adalah %s", n, cekGanjilGenap(n)? "GENAP" : "GANJIL");
     */
     int a = 10, b = 5;
     int hasil = (a > b);
     printf("nilai %d %s dari nilai %d", a, (hasil)? "LEBIH BESAR" : "LEBIH KECL" , b);
     return 0;
     
}