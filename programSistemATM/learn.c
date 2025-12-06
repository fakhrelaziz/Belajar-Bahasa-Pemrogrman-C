#include <stdio.h>

void printEnter(){
     printf("\n========== TARIK TUNAI ==========\n");
                printf("\n===========================\n");
                printf("Masukan angka 0 untuk BATAL\n");
                printf("===========================\n");
                printf("\nJumlah yang ingin ditarik: Rp. ");
                getchar();
}
int main(void){
    double saldo = 1000000;  // Saldo awal 1 juta
    int pilihan;
    double jumlah;
    int running = 1;
    
    while(running){
        printf("\n========== ATM SIMULATOR ==========\n");
        printf("Saldo saat ini: Rp %.2f\n", saldo);
        printf("==================================\n");
        printf("1. Cek Saldo\n");
        printf("2. Tarik Tunai\n");
        printf("3. Setor Tunai\n");
        printf("4. Transfer\n");
        printf("5. Keluar\n");
        printf("==================================\n");
        printf("Pilih menu: ");
        scanf("%d", &pilihan);
        
        if (pilihan == 1) {
        
                printf("\n-------- CEK SALDO --------\n");
                printf("Saldo Anda: Rp %.2f\n", saldo);
                printf("---------------------------\n\n");
                printf("Ketik:\n99. kembali ke Menu Utama\n");
                printf("===========================\n: ");

            }else if (pilihan == 2){
                
                printEnter();
                
                if (jumlah <= 0) {
                    printf("ERROR: Jumlah harus lebih dari 0!\n");
                } else if (jumlah > saldo) {
                    printf("ERROR: Saldo tidak cukup!\n");
                    printf("Saldo Anda: Rp %.2f\n", saldo);
                } else if (jumlah > 5000000) {
                    printf("ERROR: Maksimal penarikan Rp 5.000.000\n");
                } else {
                    saldo -= jumlah;
                    printf("Penarikan berhasil!\n");
                    printf("Jumlah ditarik: Rp %.2f\n", jumlah);
                    printf("Saldo tersisa: Rp %.2f\n", saldo);
                }
                
            }
        else if(pilihan == 3){
                printf("\n--- SETOR TUNAI ---\n");
                printf("Jumlah yang ingin disetor: Rp ");
                scanf("%lf", &jumlah);
                
                if (jumlah <= 0) {
                    printf("ERROR: Jumlah harus lebih dari 0!\n");
                } else if (jumlah > 10000000) {
                    printf("ERROR: Maksimal setoran Rp 10.000.000\n");
                } else {
                    saldo += jumlah;
                    printf("Setoran berhasil!\n");
                    printf("Jumlah disetor: Rp %.2f\n", jumlah);
                    printf("Saldo baru: Rp %.2f\n", saldo);
                }
            }
            
        else if(pilihan == 4){
                printf("\n--- TRANSFER ---\n");
                printf("Nomor rekening tujuan: ");
                int rekening;
                scanf("%d", &rekening);
                
                printf("Jumlah transfer: Rp ");
                scanf("%lf", &jumlah);
            
                if (jumlah <= 0) {
                    printf("ERROR: Jumlah harus lebih dari 0!\n");
                } else if (jumlah > saldo) {
                    printf("ERROR: Saldo tidak cukup!\n");
                } else {
                    double biaya = 6500;  // Biaya admin
                    double total = jumlah + biaya;
                    
                    if (total > saldo) {
                        printf("ERROR: Saldo tidak cukup (termasuk biaya admin Rp %.2f)\n", biaya);
                    } else {
                        saldo -= total;
                        printf("Transfer berhasil!\n");
                        printf("Ke rekening: %d\n", rekening);
                        printf("Jumlah: Rp %.2f\n", jumlah);
                        printf("Biaya admin: Rp %.2f\n", biaya);
                        printf("Saldo tersisa: Rp %.2f\n", saldo);
                    }
                }
            }
            
        else if(pilihan == 5){
                printf("\n--- KELUAR ---\n");
                printf("Terima kasih telah menggunakan ATM kami!\n");
                printf("Saldo akhir: Rp %.2f\n", saldo);
                running = 0;
        }else {
                printf("\nERROR: Pilihan tidak valid!\n");
                printf("Silakan pilih 1-5\n");
                break;
        }
    } 
        return 0;
}