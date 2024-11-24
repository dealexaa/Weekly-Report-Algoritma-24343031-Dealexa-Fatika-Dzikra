#include <stdio.h>

int main() {
    // Deklarasi variabel
    int pilihan;
    float saldo = 175000; 
    float setoran, penarikan;
    char nama[100], noRek[10];

    printf("\n===================================\n");
    printf("\t\tATM");
    printf("\n===================================\n");

    printf(" Masukkan No Rekening Anda : ");
    fgets(noRek, sizeof(noRek), stdin);
    printf(" Masukkan Nama Akun Anda : ");
    fgets(nama, sizeof(nama), stdin);

    printf(" No Rekening : %s", noRek);
    printf(" Nama Akun   : %s ", nama);
    printf("Saldo Anda  : Rp. %.2f \n", saldo);


    printf("\n===================================\n");
    printf("\tSelamat Datang %s", nama);
    printf("===================================\n");

    // Menampilkan menu ATM
    do
    {
        printf("\nSilahkan Pilih Transaksi Anda :\n");
        printf("1) Cek Saldo\n");
        printf("2) Setoran\n");
        printf("3) Penarikan Tunai\n");
        printf("4) Exit\n");
        printf("Pilih menu (1-4): ");
        scanf("%d", &pilihan);

        switch (pilihan) {
            case 1:
                // Cek saldo
                printf("\n===================================\n");
                printf("Saldo Anda saat ini: Rp. %.2f\n", saldo);
                printf("===================================\n");
                break;
            case 2:
                // Setoran
                printf("Masukkan jumlah setoran: Rp. ");
                scanf("%f", &setoran);
                saldo += setoran;
                printf("\n===========================================\n");
                printf("Setoran berhasil.Silahkan Cek Saldo Anda");
                printf("\n===========================================\n");
                break;
            case 3:
                // Penarikan
                printf("Masukkan jumlah penarikan: Rp. ");
                scanf("%f", &penarikan);
                
                // Cek apakah saldo cukup
                if (saldo - penarikan < 50000) {
                    printf("\n======================================================================\n");
                    printf("Penarikan gagal. Saldo minimal yang harus disisakan adalah Rp. 50.000.\n");
                    printf("======================================================================\n");
                } else {
                    saldo -= penarikan;
                    printf("\n===========================================\n");
                    printf("Penarikan berhasil.Silahkan Cek Saldo Anda");
                    printf("\n===========================================\n");
                }
                break;
            case 4:
                // Keluar dari program
                printf("\nTerima kasih! Sampai jumpa.\n");
                return 0;
            default:
                printf("Pilihan tidak valid. Silakan pilih antara 1-4.\n");
                break;
        }
         
    }
    
    while (pilihan!= 4 );
    printf("\nTerima kasih! Sampai jumpa.\n");

    return 0;
    
}
