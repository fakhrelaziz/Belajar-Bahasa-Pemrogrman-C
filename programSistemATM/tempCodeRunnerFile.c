
                scanf("%lf", &jumlah);
                printf("===========================\n");
                printf("Ketik:\n99. BATAL\n");
                printf("===========================\n: ");
                scanf("%d", &keMenu);
                if(keMenu == 99){break;}
                
                if (jumlah <= 0) {
                    printf("ERROR: Jumlah harus lebih dari 0!\n");
                } else if (jumlah > saldo) {
                    printf("ERROR: Saldo tidak cukup!\n");
                    printf("Saldo Anda: Rp %.2f\n", saldo);
                } else if (jumlah > 5000000) {