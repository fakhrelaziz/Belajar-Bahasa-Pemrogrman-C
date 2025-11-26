#include <stdio.h>

// Fungsi dengan tipe int (Harus ada return value)
int cetakAngka1(int n){
    // 1. Masukkan logika print ke dalam loop (sama seperti di void)
    for(int i = 1; i <= n; i++){
         printf("Di dalam fungsi - urutan ke: %d\n", i); 
    }
    
    // 2. Karena ini 'int', wajib mengembalikan nilai.
    // Misalnya kita kembalikan angka terakhir (n) sebagai tanda selesai.
    return n; 
}

int main(){
    int n; 
    printf("Masukkan angka yang mau di loop: ");
    scanf("%d", &n);
    
    // Memanggil fungsi, fungsi akan melakukan loop & print di dalamnya
    // Lalu hasil return (nilai n) disimpan di variabel 'hasil'
    int hasil = cetakAngka1(n);
    
    // Mencetak nilai yang dikembalikan (return) oleh fungsi
    printf("------------------------------\n");
    printf("Status Akhir (Return Value): %d\n", hasil);
    
    return 0;
}