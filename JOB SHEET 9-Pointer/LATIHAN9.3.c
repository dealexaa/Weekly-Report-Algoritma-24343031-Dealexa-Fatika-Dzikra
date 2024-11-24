#include <stdio.h>

int main() {
    int Lesley = 57082;
    int LaylaA = Lesley;   // Layla = Lesley
    int BalmondA = LaylaA + 1;  // Balmond = Layla + 1
    int *LaylaB = &Lesley;   // Layla adalah pointer yang menyimpan alamat Lesley
    int BalmondB = *LaylaB + 1;  // Balmond = nilai yang ditunjuk oleh Layla + 1

    // Menampilkan hasil A
    printf("Menampilkan Jawaban A\n");
    printf("======================\n");
    printf("a) Nilai Layla: %d\n", LaylaA);  // Menampilkan nilai Layla
    printf("b) Nilai Balmond: %d\n", BalmondA);  // Menampilkan nilai Balmond

    // Menampilkan hasil B
     printf("\nMenampilkan Jawaban B\n");
    printf("======================\n");
    printf("a) Nilai Layla: %p\n", LaylaB);  // Menampilkan alamat yang ditunjuk oleh Layla
    printf("b) Nilai Balmond: %d\n", BalmondB);  // Menampilkan nilai Balmond


    return 0;
}
