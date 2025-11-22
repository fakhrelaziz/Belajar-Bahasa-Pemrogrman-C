#include <stdio.h>

int main(void) {
    // TIDAK ada deklarasi variabel
    
    printf("%d\n", 10);     //   10 adalah literal
    printf("%d\n", 42);     //   42 adalah literal
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