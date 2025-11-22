#include <stdio.h>

int main(void) {
    // 1. LITERAL INTEGER
    printf("Literal: %d\n", 42);
    
    // 2. LITERAL STRING
    printf("String: %s\n", "Hello");
    
    // 3. EKSPRESI ARITMATIKA
    printf("Ekspresi: %d\n", 10 + 5);
    
    // 4. EKSPRESI LOGIKA (return 1 atau 0)
    printf("Logika: %d\n", 5 > 3);  // Output: 1 (TRUE)
    
    // 5. VARIABEL (PERLU DEKLARASI!)
    int angka = 100;
    printf("Variabel: %d\n", angka);
    
    // 6. KOMBINASI
    printf("Kombinasi: %d\n", angka + 50);
    
    // 7. MULTIPLE LITERALS
    printf("%d + %d = %d\n", 5, 3, 5+3);
    
    return 0;
}
```

**Output:**
```
Literal: 42
String: Hello
Ekspresi: 15
Logika: 1
Variabel: 100
Kombinasi: 150
5 + 3 = 8