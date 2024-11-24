#include <stdio.h>

// Fungsi rekursif untuk perkalian menggunakan penjumlahan
int perkalian(int a, int b) {
    if (b == 0) {
        return 0; // jika b = 0, hasilnya 0
    } else {
        return a + perkalian(a, b - 1); // tambahkan a = 12 sebanyak b = 6 kali(12+12+12+12+12+12)
    }
}

int main() {
    int num1 = 12, num2 = 6;
    int hasil = perkalian(num1, num2);

    printf("%d x %d = %d\n", num1, num2, hasil);

    return 0;
}
