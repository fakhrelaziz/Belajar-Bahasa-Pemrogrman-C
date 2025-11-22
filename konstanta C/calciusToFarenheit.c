#include <stdio.h>

#define FAKTOR_FARENHEIT 1.8
#define OFFSET_FARENHEIT 32
#define OFFSET_KELVIN  273.15
//Konversi Calcius To Farenheit or Kelvin
float calciusToKelvin(float c){
    float konversi = c +  OFFSET_KELVIN;
    return konversi;
}
float calciusToFerenheit(float C){
    float konversi = C * FAKTOR_FARENHEIT + OFFSET_FARENHEIT;
    return konversi;
}

int main(){
    int c;
    printf("Masukkan Calcius: ");
    scanf("%d", &c);
    float fungsi[2] ={calciusToFerenheit(c), calciusToKelvin(c)};
    printf("Hasil:\n 1. Farenheit = %.1f\n 2. Kelvin = %.2f", fungsi[0], fungsi[1]) ;
    return 0;
}