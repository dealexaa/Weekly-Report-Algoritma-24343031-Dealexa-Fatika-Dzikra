#include <stdio.h>


int main() {
    int jumlahMahasiswa, i;
   
   

    // Meminta input jumlah mahasiswa
    printf("Masukkan jumlah mahasiswa yang ingin diinput: ");
    scanf("%d", &jumlahMahasiswa);
    getchar();

    char namaMahasiswa[jumlahMahasiswa][50];
    
    // Input nama mahasiswa
    for (i = 0; i < jumlahMahasiswa; i++) {
        printf("Masukkan nama mahasiswa ke-%d: ", i + 1);
        scanf("%[^\n]s", namaMahasiswa[i]);
        getchar();  

    }
   
    // Menampilkan nama mahasiswa yang telah diinput
    for (i = 0; i < jumlahMahasiswa; i++) {
        printf("Nama Mahasiswa ke-%d : %s\n", i + 1, namaMahasiswa[i]);
    }

    return 0;
}
