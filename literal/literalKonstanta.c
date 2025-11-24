#include <stdio.h>

int main(void) {
    // TIDAK ada deklarasi variabel
    

    Literal Angka
    printf("%d\n", 10);     //   10 adalah literal angka
    printf("%d\n", 42);     //   42 adalah literal angka
    printf("%f\n", 2.5);
    printf("%x\n", 0xff); //hexadecimal

    //Literal karakter
    printf("%c\n", 'b');
    printf("%c\n", '\x41');
    printf("%c\n", '\n');
    printf("%c\n", '8');
    printf("%c\n", '\t');

    printf("%s\n", "Halo"); //   "Halo" adalah string literal
    return 0;
}

/*
int main(void) {
    // TIDAK ada deklarasi variabel
    
    printf("%d\n", 5 + 3);      // ✅ OK! Output: 8
    printf("%d\n", 10 * 2);     // ✅ OK! Output: 20
    printf("%d\n", 100 / 4);    // ✅ OK! Output: 25
    
    return 0;
}*/