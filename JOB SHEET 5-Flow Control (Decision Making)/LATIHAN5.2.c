#include <stdio.h>

int main() {
    // Variabel untuk total pembelian dan diskon
    float harga, totalPembelian, diskon, totalBayar;
    char nama [100], barang [100];
    int jumlah;
    
    printf("---------------------------------\n");
    printf("SELAMAT DATANG DI TOSERBA\n");
    printf("---------------------------------\n");
 
    printf("Masukkan Nama Anda : ");
    scanf("%[^\n]s", &nama);
    getchar();
    printf("Masukkan Nama Barang Yang Anda Beli : ");
    scanf("%[^\n]s", &barang);
 
    printf("Masukkan Harga Barang : Rp. ");
    scanf("%f", &harga);
 
    printf("Jumlah Barang Yang Di Beli : ");
    scanf("%i", &jumlah);
 
    totalPembelian = harga*jumlah;
    // Meminta input total pembelian
   

    // Menghitung diskon berdasarkan ketentuan
    if (totalPembelian <= 75000) {
        diskon = totalPembelian * 0.05;  // Diskon 5%
    } else if (totalPembelian > 75000 && totalPembelian <= 125000) {
        diskon = totalPembelian * 0.15;  // Diskon 15%
    } else { 
        diskon = totalPembelian * 0.25;  // Diskon 25%
        totalBayar = totalPembelian - diskon + 5000; // Tambah cashback
       
    }

    // Menghitung total bayar setelah diskon
    totalBayar = totalPembelian - diskon;

    // Menampilkan hasil
    printf("\n =========================================================\n");
    printf("\t\t\tTOSERBA");
    printf("\n =========================================================\n");
    printf(" NAMA PEMBELI                    : %s\n ", nama);
    printf("NAMA BARANG                     : %s\n ", barang);
    printf("HARGA BARANG                    : Rp. %.2f\n ", harga);
    printf("JUMLAH BARANG YANG DIBELI       : %i\n ", jumlah);
    printf("\n --------------------------------------------------------+\n");
    printf(" Total Pembelian                 : Rp. %.2f\n", totalPembelian);
    printf(" Diskon                          : Rp. %.2f\n", diskon);
    printf(" Total yang harus dibayar        : Rp. %.2f\n", totalBayar);
    printf("\n --------------------------------------------------------\n");
    
    printf("\t~~~~~~~~~TERIMAKASIH^^~~~~~~~~");
    
    return 0;
}

