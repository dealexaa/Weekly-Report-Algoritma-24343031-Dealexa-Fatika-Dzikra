#include <stdio.h>

int main() {
	
	char nama[100];
    int tarifPertama = 15000;
    int tarifBerikutnya = tarifPertama * 0.5;
    int durasiMenonton;
    int totalBiaya;

    printf("\n---------------------------------------\n");
    printf("\t======RENTAL FILM======");
    printf("\n---------------------------------------\n");
    printf("Masukkan Nama Anda : ");
    scanf("%[^\n]s", &nama);
    printf("Masukkan durasi menonton film (dalam jam): ");
    scanf("%d", &durasiMenonton);

    if (durasiMenonton <= 0) {
        printf("Durasi menonton tidak valid.\n");
    } else if (durasiMenonton == 1) {
        totalBiaya = tarifPertama;
    } else {
        totalBiaya = tarifPertama + (durasiMenonton - 1) * tarifBerikutnya;
    }

    printf("\n---------------------------------------\n");
    printf("\t======RENTAL FILM======");
    printf("\n---------------------------------------\n");
    printf("Nama: %s\n", nama);
    printf("Total biaya sewa film untuk durasi %d jam adalah Rp %d\n", durasiMenonton, totalBiaya);

    return 0;
}

