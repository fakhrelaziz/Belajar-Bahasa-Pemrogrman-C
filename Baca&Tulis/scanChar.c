#include <stdio.h>

int main(){
int b;
char c;
 
/* Algoritma */
printf ("hello\n");

printf("Masukan Angka: ");
scanf("%d", &b);
printf("\n");
printf("Masukkan karakter: ");
scanf(" %c", &c); //ketika ingin meminta user input dua kali tambahken "spasi sebelum %c"
//tpi hanya untuk input tipe int dan char barengan
printf ("Angka: %d dan huruf: %c ", b, c);
return 0;
}
