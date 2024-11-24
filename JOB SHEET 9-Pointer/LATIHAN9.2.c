#include <stdio.h>
#include <string.h>

// Fungsi untuk membalikkan string menggunakan pointer
void Kebalikan(char *str) {
    char *awal = str;  // Pointer ke awal string
    char *akhir = str + strlen(str) - 1;  // Pointer ke akhir string
    
    // Tukar karakter antara awal dan akhir
    while (awal < akhir) {
        // Tukar karakter
        char tukar = *awal;
        *awal = *akhir;
        *akhir = tukar;

        // Geser pointer
        awal++;
        akhir--;
    }
}

int main() {
    char kalimat[100];

    // Input kalimat
    printf("Masukkan Kalimat: ");
    scanf("%[^\n]c", kalimat);
    getchar();

    // Balikkan kalimat menggunakan pointer
   Kebalikan(kalimat);

    // Output kalimat yang dibalik
    printf("Kebalikannya: %s\n", kalimat);

    return 0;
}
