#include <stdio.h>

// Fungsi untuk menghitung besar diskon berdasarkan jumlah pembelian
float potong(float total) {
    if (total < 1000000) {
        return 0; // Tidak ada diskon
    } else if (total >= 1000000 && total < 3000000) {
        return total * 0.20; // Diskon 20%
    } else {
        return total * 0.35; // Diskon 35%
    }
}

int main() {
    float totalPembelian, diskon, totalBayar;

    printf("Program Hitung Potongan\n");
    printf("------------------------\n");

    // Input total pembelian
    printf("Total Pembelian (Rp.): ");
    scanf("%f", &totalPembelian);

    // Hitung besar diskon
    diskon = potong(totalPembelian);

    // Hitung total yang harus dibayarkan
    totalBayar = totalPembelian - diskon;

    // Tampilkan hasil
    printf("Besar Diskon: Rp. %.2f\n", diskon);
    printf("Besar Yang Harus Dibayarkan: Rp. %.2f\n", totalBayar);

    return 0;
}
