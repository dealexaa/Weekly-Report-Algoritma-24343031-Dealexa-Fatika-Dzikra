#include <stdio.h>
int main()
{
    // membuat variabel
    char nama[100], NIM[100], prodi[100], fakultas[100];

    float praktikum, uts, uas, nilaiAkhir;

    printf("Masukkan Nama Anda : ");
    fgets(nama, sizeof(nama), stdin);

    printf("Masukkan NIM Anda : ");
    fgets(NIM, sizeof(NIM), stdin);

    printf("Masukkan Prodi Anda : ");
    fgets(prodi, sizeof(prodi), stdin);

    printf("Masukkan Fakultas Anda : ");
    fgets(fakultas, sizeof(fakultas), stdin);

    printf("Masukkan Nilai Praktikum Anda : ");
    scanf("%f", &praktikum);

    printf("Masukkan Nilai UTS Anda : ");
    scanf("%f", &uts);

    printf("Masukkan Nilai UAS Anda : ");
    scanf("%f", &uas);

    nilaiAkhir = (0.3 * praktikum) + (0.3 * uts) + (0.4 * uas);

    printf("\n----------------------------------\n");
    printf("\tNILAI AKHIR ANDA\n");
    printf("----------------------------------\n");
    printf(" NAMA            : %s ", nama);
    printf("NIM             : %s ", NIM);
    printf("PRODI           : %s ", prodi);
    printf("FAKULTAS        : %s ", fakultas);
    printf("NILAI PRAKTIKUM : %.2f\n ", praktikum);
    printf("NILAI UTS       : %.2f\n ", uts);
    printf("NILAI UAS       : %.2f\n ", uas);
    printf("NILAI AKHIR     : %.2f ", nilaiAkhir);
    return 0;
}
