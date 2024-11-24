#include <stdio.h>

int main() {
    int pilihan;
    float luasPermukaan, r, s, p, l, t;
    const float PI = 3.14;
    char ulang;

    // Menampilkan menu
    printf("\n==========================================\n");
    printf("\tKalkulator Luas Permukaan");
    printf("\n==========================================\n");
    
    do
    {
    printf("Pilih bentuk yang ingin dihitung:\n");
    printf("1) Luas Permukaan Bola\n");
    printf("2) Luas Permukaan Kubus\n");
    printf("3) Luas Permukaan Balok\n");
    printf("4) Luas Permukaan Tabung\n");
    printf("Masukkan pilihan (1-4): ");
    scanf("%d", &pilihan);

    switch (pilihan) {
        case 1: {
            // Luas Permukaan Bola = 4 * PI * r^2
            
            printf("Masukkan jari-jari bola (r): ");
            scanf("%f", &r);
            luasPermukaan = 4 * PI *r *r ;
            printf("Luas Permukaan Bola: %.2f\n", luasPermukaan);
            break;
        }
        case 2: {
            // Luas Permukaan Kubus = 6 * s^2
            
            printf("Masukkan panjang sisi kubus (s): ");
            scanf("%f", &s);
            luasPermukaan = 6 * s * s;
            printf("Luas Permukaan Kubus: %.2f\n", luasPermukaan);
            break;
        }
        case 3: {
            // Luas Permukaan Balok = 2 * (p * l + p * t + l * t)
            
            printf("Masukkan panjang balok (p): ");
            scanf("%f", &p);
            printf("Masukkan lebar balok (l): ");
            scanf("%f", &l);
            printf("Masukkan tinggi balok (t): ");
            scanf("%f", &t);
            luasPermukaan = 2 * (p * l + p * t + l * t);
            printf("Luas Permukaan Balok: %.2f\n", luasPermukaan);
            break;
        }
        case 4: {
            // Luas Permukaan Tabung = 2 * PI * r * (r + t)
            
            printf("Masukkan jari-jari tabung (r): ");
            scanf("%f", &r);
            printf("Masukkan tinggi tabung (t): ");
            scanf("%f", &t);
            luasPermukaan = 2 * PI * r * (r + t);
            printf("Luas Permukaan Tabung: %.2f\n", luasPermukaan);
            break;
        }
        default:
            printf("Pilihan tidak valid. Silakan pilih antara 1-4.\n");
            break;
    }
    printf("\n\nOperasi Lainnya (y/t)? ");
	scanf("%s", &ulang);
	printf("\n");
   }
   
   while (ulang!= 't');
	
    printf("~~~~~~~TERIMAKASIH~~~~~~");

    return 0;
}

