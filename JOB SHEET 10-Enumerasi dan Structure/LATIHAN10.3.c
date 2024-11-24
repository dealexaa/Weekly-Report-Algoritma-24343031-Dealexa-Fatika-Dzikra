#include <stdio.h>
#include <string.h>

#define MAX_MAHASISWA 100

struct Mahasiswa {
    int npm, hp;
    char nama[50];
    char tgl_lahir[11]; // Format: dd-mm-yyyy
    char alamat[100];
    
};

int main() {
    struct Mahasiswa mahasiswa[MAX_MAHASISWA];
    int count = 0;
    char choice;

    do {
        if (count >= MAX_MAHASISWA) {
            printf("Data mahasiswa sudah penuh!\n");
            break;
        }

        printf("NPM       : ");
        scanf("%d", &mahasiswa[count].npm);
        printf("NAMA      : ");
        scanf(" %[^\n]", mahasiswa[count].nama); // Membaca string dengan spasi
        printf("TGL LAHIR : ");
        scanf("%s", mahasiswa[count].tgl_lahir);
        printf("ALAMAT    : ");
        scanf(" %[^\n]", mahasiswa[count].alamat); // Membaca string dengan spasi
        printf("HP        : ");
        scanf("%d", &mahasiswa[count].hp);

        count++;

        printf("Mau memasukkan data lagi [y/t]? ");
        scanf(" %c", &choice);
    } while (choice == 'y' || choice == 'Y');

    // Menampilkan data mahasiswa
    printf("\nData Mahasiswa:\n");
    for (int i = 0; i < count; i++) {
        printf("%d           %s            %s           %s         %d\n", mahasiswa[i].npm, mahasiswa[i].nama, mahasiswa[i].tgl_lahir, mahasiswa[i].alamat, mahasiswa[i].hp);
    }

    return 0;
}