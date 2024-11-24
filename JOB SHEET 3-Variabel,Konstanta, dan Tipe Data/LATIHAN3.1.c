#include <stdio.h>

int main()
{
	float rupiah, dollar;
	
	printf("\nKonversi Mata Uang\n");
	printf("~~~~~~~~~~~~~~~~~~~~\n\n");
	printf("Nominal Konversi Rupiah = Rp. ");
	scanf("%f", &rupiah);
	
	dollar = rupiah/14250;
	
	printf("----------------------------------------\n");
	printf("Hasil Konveersi Ke Dollar = US$ %.2f", dollar);
	printf("\n----------------------------------------\n");

	return 0;

}
