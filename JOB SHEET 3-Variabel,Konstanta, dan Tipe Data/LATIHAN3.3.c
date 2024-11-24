#include <stdio.h>

int main()
{
	int pilihan;
	char ulang;
	float d, r, volume, luasPermukaan;
	const float PI = 3.14;
	do
	{
	printf("OPERASI PADA BOLA BASKET\n");
	printf("1.Menghitung Volume Bola Basket\n");
	printf("2.Menghitung Luas Permukaan Bola Basket\n");
	
	printf("Pilihan Anda : ");
	scanf("%i", &pilihan);
	
	printf("Masukkan Diameter Bola(cm) : ");
	scanf("%f", &d);
	
	r = d/2;
	
	switch(pilihan)
	{
		case 1:
			volume = (4*PI*r*r*r)/3;
			printf("Hasil Volume Bola Basket Adalah %.2f cm", volume);
			break;
		case 2:
		    luasPermukaan = 4*PI*r*r;
			printf("Hasil Luas Permukaan Bola Basket Adalah %.2f cm", luasPermukaan);
			break;
		default:
		   printf("tidak ada");	
	}
	printf("\n\nOperasi Lainnya (y/t)? ");
	scanf("%s", &ulang);
	printf("\n");	
	}
	
	
	while (ulang!= 't');
	
    printf("~~~~~~~TERIMAKASIH~~~~~~");
    
	return 0;
}
