#include <stdio.h>
#define PI 3.14

// Fungsi untuk menghitung luas lingkaran
float luas(float JariJari) {
    return PI * JariJari * JariJari;
}

// Fungsi untuk menghitung keliling lingkaran
float keliling(float JariJari) {
    return 2 * PI * JariJari;
}

int main() {
    float JariJari;

    // Input jari-jari lingkaran
    printf("Masukkan jari-jari lingkaran: ");
    scanf("%f", &JariJari);

    // Hitung dan tampilkan hasil
    printf("Luas lingkaran        : %.2f\n", luas(JariJari));
    printf("Keliling lingkaran    : %.2f\n", keliling(JariJari));

    return 0;
}
