#include <stdio.h>
#include <string.h>

void KataKata(const char *kata) {
    const char *akhir = kata + strlen(kata) - 1; // Pointer ke huruf terakhir string
    while (akhir >= kata) {
        for (const char *p = akhir; p < kata + strlen(kata); p++) {
            printf("%c", *p); // Cetak huruf dari posisi akhir ke akhir string
        }
        printf("\n");
        akhir--; // Geser pointer ke huruf sebelumnya
    }
}

int main() {
    const char *kata = "BORLAND"; // Kata yang akan dicetak
    KataKata(kata);
    return 0;
}
