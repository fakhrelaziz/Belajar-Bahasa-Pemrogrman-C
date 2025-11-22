#include <stdio.h>

int main(){
    int panjang, lebar;
    int luas;

    printf("berapa panjang & lebar: ");
    scanf("%d %d", &panjang, &lebar);

    luas = panjang * lebar;
    printf("luar persegi panjang adalah: %d", luas);
    
}