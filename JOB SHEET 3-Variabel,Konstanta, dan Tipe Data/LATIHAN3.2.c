#include <stdio.h>

int main()
{
	float celcius, kelvin, farenheit, reamur;
	
	printf("-----------------------------\n");
	printf("KONVERSI SUHU\n");
	printf("-----------------------------\n");
	
	printf("Masukkan Suhu Dalam Celcius : ");
	scanf("%f", &celcius);
	
	
	kelvin = celcius+273.15;
	farenheit = (celcius*1.8)+32;
	reamur = celcius*0.8;
	
	printf("\n-----------------------------\n");
	printf("HASIL KONVERSI SUHU\n");
	printf("-----------------------------\n");
	printf("Suhu Dalam Celcius = %.2f C\n", celcius);
	printf("Suhu Dalam Kelvin = %.2f K\n", kelvin);
	printf("Suhu Dalam Farenheit = %.2f F\n", farenheit);
	printf("Suhu Dalam Reamur = %.2f R\n", reamur);
	
	return 0;
	
}
