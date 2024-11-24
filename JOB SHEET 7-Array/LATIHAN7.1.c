#include <stdio.h>
void main() {
 // membuat array dari nilai mahasiswa
 int nilai[20] = {75, 65, 66, 57, 84, 56, 63, 76, 71, 69, 70, 88, 90, 87, 93, 79, 86, 95, 100, 99};
 // length untuk jumlah data atau n
 int length = sizeof(nilai) / sizeof(*nilai);
 int sum = 0;
 for(int i = 0; i < length; i++){
 sum += nilai[i];
 }
 // rata-rata nilai mahasiswa
 float rata_rata = (float)sum / (float)length;
 printf("Rata-rata Nilai Mahasiswa: %.2f\n", rata_rata);
}