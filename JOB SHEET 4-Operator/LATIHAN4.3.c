#include <stdio.h>
int main() 
{
// membuat variabel
 char nama [100];
 
 float presensi, praktek, uts, uas, nilaiAkhir;
 
 printf("\n-----------------------------\n");
 printf("NILAI AKHIR PEMROGRAMAN C");
 printf("\n-----------------------------\n");
 printf("Masukkan Nama Anda : ");
 scanf("%[^\n]s", &nama);
 
 printf("Masukkan Nilai Presensi Anda : ");
 scanf("%f", &presensi);
 
 printf("Masukkan Nilai Praktek Anda : ");
 scanf("%f", &praktek);
 
 printf("Masukkan Nilai UTS Anda : ");
 scanf("%f", &uts);
 
 printf("Masukkan Nilai UAS Anda : ");
 scanf("%f", &uas);

 nilaiAkhir = (0.1*presensi) + (0.2*praktek) + (0.3*uts) + (0.4*uas);
 
 printf("\n--------------------------------------------------------------\n");
 printf("%s Nilai Akhir Anda Adalah %.2f ", nama, nilaiAkhir);
 printf("\n--------------------------------------------------------------\n"); 
 
return 0;
}
 
