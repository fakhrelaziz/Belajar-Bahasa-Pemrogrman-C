#include <stdio.h>

int main(){
     int i;
     printf("Masukkan Nilai: ");
     scanf("%d", &i);
     printf("Nilai setelah increment ++i= %d",i, i++);
     printf("Nilai setelah increment ++i= %d", ++i);/* sebelum dicetak, nilai i ditambah 1 */
     return 0;
}
/*Apa bedanya Increment i++ & ++i
kalau i++ itu menambahkan integer i dengan 1 setelah mencetak, 
kalau ++i menambahkan integer i dengan 1 sebelum dicetak setelah ditambah otomatis langsung mencetak
i++ itu teroperasi dicetak lalu di tambahkan, kalau ++i itu dioperasi atau ditambah lalu dicetak*/