#include <stdio.h>

// Fungsi untuk penjumlahan
float penjumlahan(float a, float b) {
    return a + b;
}

// Fungsi untuk pengurangan
float pengurangan(float a, float b) {
    return a - b;
}

// Fungsi untuk perkalian
float perkalian(float a, float b) {
    return a * b;
}

// Fungsi untuk pembagian
float pembagian(float a, float b) {
    if (b != 0) {
        return a / b;
    } else {
        printf("Tidak Terdefinisi.\n");
        return 0; 
    }
}

int main() {
    float num1, num2;
    char operasi;

    // Input angka dan operasi
    printf("Masukkan Angaka Pertama: ");
    scanf("%f", &num1);
    printf("Masukkan Angka Kedua: ");
    scanf("%f", &num2);
    printf("Masukkan operasi (+, -, *, /): ");
    scanf(" %c", &operasi);

    // Switch-case untuk memilih operasi
    switch (operasi) {
        case '+':
            printf("Hasil: %.2f + %.2f = %.2f\n", num1, num2, penjumlahan(num1, num2));
            break;
        case '-':
            printf("Hasil: %.2f - %.2f = %.2f\n", num1, num2, pengurangan(num1, num2));
            break;
        case '*':
            printf("Hasil: %.2f * %.2f = %.2f\n", num1, num2, perkalian(num1, num2));
            break;
        case '/':
            printf("Hasil: %.2f / %.2f = %.2f\n", num1, num2, pembagian(num1, num2));
            break;
        default:
            printf("Error: Operasi Tidak Benar.\n");
    }

    return 0;
}
