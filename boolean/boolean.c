/*boolean adalah tipe data yang menguji suatu ekspresi atau suatu pernyataan
bernilai true atau false, sebenarnya dalam bahsa C tipe data boolen ga ada
untuk mendeklarasikan tipe data boolean itu kita menggunakan header atau fungsi dari bahasa C nya
yaitu #include <stdbool.h>*/

/*kita bisa juga mendeklarasikan boolean ini tanpa menggunakan header <stdbool> 
kita bisa menggunakan cara lama seperti berikut:*/
#include <stdio.h>
#include <stdbool.h>

int main(){
     //Cara lama
     /*
     int a = 1;
     int b = 0;

     printf("Nilai dari a adalah True: %d\n", a);
     printf("Nilai dari b adalah False: %d", b);
     */

     //Menggunakan #include <stdbool.h>
     /*
     bool a = true; //output 1
     bool b = false; //output 0

     printf("Nilai dari a adalah True: %d\n", a);
     printf("Nilai dari b adalah False: %d", b);
     */

     //kemudia boolen ini juga terdapat dalam operasi logika 
     int a = 20;
     int hasil = (a > 0) && (a % 2 == 0);
     if (hasil){
          printf("Nilai angka %d adalah %d ", a, hasil);
     }else printf("Nilai angka %d adalah %d", a, hasil);
     

     
     return 0;

}