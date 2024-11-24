#include <stdio.h>
#include <string.h>

int main() {
    // Variabel untuk menyimpan nilai
    float nilaiKehadiran, nilaiTugas, nilaiUTS, nilaiUAS;
    float nilaiAkhir;
    char grade[5]; // Untuk menyimpan grade sebagai string
    char nama[90], NIM [100], prodi [100], fakultas [100];
    char *keterangan;

    // Meminta input nilai
    printf("Masukkan Nama Anda : ");
    fgets(nama, sizeof(nama), stdin);

    printf("Masukkan NIM Anda : ");
    fgets(NIM, sizeof(NIM), stdin);

    printf("Masukkan Prodi Anda : ");
    fgets(prodi, sizeof(prodi), stdin);

    printf("Masukkan Fakultas Anda : ");
    fgets(fakultas, sizeof(fakultas), stdin);
    
    printf("Masukkan nilai kehadiran (0-100): ");
    scanf("%f", &nilaiKehadiran);
    
    printf("Masukkan nilai tugas (0-100): ");
    scanf("%f", &nilaiTugas);
    
    printf("Masukkan nilai UTS (0-100): ");
    scanf("%f", &nilaiUTS);
    
    printf("Masukkan nilai UAS (0-100): ");
    scanf("%f", &nilaiUAS);

    // Menghitung nilai akhir
    nilaiAkhir = (nilaiKehadiran * 0.2) + (nilaiTugas * 0.2) + (nilaiUTS * 0.25) + (nilaiUAS * 0.35);

    // Menentukan grade dan keterangan
    if (nilaiAkhir >= 0 && nilaiAkhir <= 44) {
        strcpy(grade, "E");
        keterangan = "Maaf, anda tidak lulus!";
        
    } else if (nilaiAkhir >= 45 && nilaiAkhir <= 55) {
        strcpy(grade, "D");
        keterangan = "Maaf, anda tidak lulus!"; 
        
    } else if (nilaiAkhir >= 56 && nilaiAkhir <= 65) {
        strcpy(grade, "C");
        keterangan = "Anda lulus, tingkatkan lagi untuk kedepannya!";
         
    } else if (nilaiAkhir >= 66 && nilaiAkhir <= 75) {
        strcpy(grade, "B-");
        keterangan = "Anda lulus dengan baik, tingkatkan terus belajarnya!";
         
    } else if (nilaiAkhir >= 76 && nilaiAkhir <= 80) {
        strcpy(grade, "B");
        keterangan = "Anda lulus dengan baik, tingkatkan terus belajarnya!";
         
    } else if (nilaiAkhir >= 81 && nilaiAkhir <= 85) {
        strcpy(grade, "B+");
        keterangan = "Anda lulus dengan baik, tingkatkan terus belajarnya!";
         
    } else if (nilaiAkhir >= 86 && nilaiAkhir <= 90) {
        strcpy(grade, "A-");
        keterangan = "Selamat! Anda lulus dengan nilai yang sangat memuaskan!";
         
    } else if (nilaiAkhir >= 91 && nilaiAkhir <= 100) {
        strcpy(grade, "A");
        keterangan = "Selamat! Anda lulus dengan nilai yang sangat memuaskan!";
    } else {
        printf("Nilai yang dimasukkan tidak valid.\n");
        return 1;  // Keluar dari program jika nilai tidak valid
    }
    
    // Menampilkan semua nilai
    printf("\n----------------------------------\n");
    printf("\tNILAI AKHIR ANDA");
    printf("\n----------------------------------\n");
    printf(" NAMA            : %s ", nama);
    printf("NIM             : %s ", NIM);
    printf("PRODI           : %s ", prodi);
    printf("FAKULTAS        : %s ", fakultas);
    printf("Nilai Akhir     : %.2f\n", nilaiAkhir);
    printf(" Grade           : %s\n", grade);
    printf(" Keterangan      : %s\n", keterangan);
    
    return 0;
}
