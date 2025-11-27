#include <stdio.h>

// Fungsi dengan tipe int (Harus ada return value)
int cetakAngka1(int n){
    // 1. Masukkan logika print ke dalam loop 
    for(int i = 1; i <= n; i++){
         printf("function: %d\n", i); 
    }
    
    // 2. Karena ini 'int', wajib mengembalikan nilai.
    // Misalnya kita kembalikan angka terakhir (n) sebagai tanda selesai.
    return n; 
}

// Lebih baik menggunakan prosedur jika hanya ingin mencetak tanpa mengembalikan nilai
void cetakAngka2(int n){
    // 1. Masukkan logika print ke dalam loop
    for(int i = 1; i <= n; i++){
         printf("procedure: %d\n", i); 
    }
}

int main(){
    int n; 
    printf("Masukkan angka yang mau di loop: ");
    scanf("%d", &n);
    
    // Memanggil fungsi, fungsi akan melakukan loop & print di dalamnya
    // Lalu hasil return (nilai n) disimpan di variabel 'hasil'
    //int hasil = cetakAngka1(n);
    
    // Mencetak nilai yang dikembalikan (return) oleh fungsi

    //printf("Status Akhir (Return Value): %d\n", hasil);

    cetakAngka2(n);
    
    return 0;
}