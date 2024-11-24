#include <stdio.h>
#include <stdlib.h>

// Struktur untuk menyimpan biodata mahasiswa
struct Mahasiswa {
    char nama[100];
    char nim[20];
    char jurusan[50];
    char programStudi[50];
};

// Fungsi untuk menyimpan biodata mahasiswa ke dalam file
void simpanDataKeFile(struct Mahasiswa mhs) {
    FILE *file = fopen("datamahasiswa.txt", "a"); // Membuka file dengan mode append

    if (file == NULL) {
        printf("Gagal membuka file untuk menyimpan data.\n");
        exit(1); // Keluar dari program jika file gagal dibuka
    }

    // Menulis data mahasiswa ke dalam file
    fprintf(file, "Nama: %s\n", mhs.nama);
    fprintf(file, "NIM: %s\n", mhs.nim);
    fprintf(file, "Jurusan: %s\n", mhs.jurusan);
    fprintf(file, "Program Studi: %s\n", mhs.programStudi);
    fprintf(file, "\n"); // Menambahkan baris kosong sebagai pemisah antar data mahasiswa

    fclose(file); // Menutup file setelah menulis
}

int main() {
    struct Mahasiswa mhs;
    int jumlahMahasiswa;
    
    // Menanyakan berapa banyak data mahasiswa yang ingin dimasukkan
    printf("Berapa banyak data mahasiswa yang ingin dimasukkan? ");
    scanf("%d", &jumlahMahasiswa);
    getchar(); // Membersihkan newline dari input sebelumnya

    // Perulangan untuk menginput data mahasiswa
    for (int i = 0; i < jumlahMahasiswa; i++) {
        printf("\nMasukan data mahasiswa ke-%d\n", i + 1);
        
        // Input data mahasiswa
        printf("Nama: ");
        scanf("%[^\n]s", mhs.nama);
        getchar();
       
        
        printf("NIM: ");
         scanf("%[^\n]s", mhs.nim);
        getchar();

        printf("Jurusan: ");
        scanf("%[^\n]s", mhs.jurusan);
        getchar();
        
        printf("Program Studi: ");
        scanf("%[^\n]s", mhs.programStudi);
        getchar();
        // Menyimpan data mahasiswa ke dalam file
        simpanDataKeFile(mhs);
    }

    printf("\nData mahasiswa telah berhasil disimpan.\n");

    return 0;
}
