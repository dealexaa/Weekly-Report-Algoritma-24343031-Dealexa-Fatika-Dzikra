#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void mulaiGame() {
    int angka, tebakan, percobaan = 0;

    // Menentukan nomor acak antara 1 hingga 20
    angka = rand() % 20 + 1;

    printf("Tebak nomor saya antara 1 dan 20: \n");

    // Loop sampai menebak nomor yang benar
    do {
        printf("Masukkan tebakan Anda: ");
        scanf("%d", &tebakan);
        percobaan++;

        if (tebakan < angka) {
            printf("Nomor saya lebih besar!\n");
        } else if (tebakan > angka) {
            printf("Nomor saya lebih kecil!\n");
        } else {
            printf("Selamat, anda benar! Nomor saya adalah %d.\n", angka);
            printf("Jumlah percobaan yang diperlukan: %d\n", percobaan);
        }

    } while (tebakan != angka);
}

int main() {
    char mainLagi;

// menginisialisasi generator angka acak agar angka yang dihasilkan berbeda setiap kali program dijalankan
    srand(time(NULL));

    do {
        // Memulai game
        mulaiGame();

        // Tanyakan apakah pemain ingin bermain lagi
        printf("Apakah Anda ingin bermain lagi? (y/n): ");
        scanf(" %c", &mainLagi);  
    } while (mainLagi == 'y' || mainLagi == 'Y');  // Jika input 'y' atau 'Y', game akan dimulai lagi

    printf("Terima kasih telah bermain!\n");
    return 0;
}
