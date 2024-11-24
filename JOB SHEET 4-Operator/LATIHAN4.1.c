#include <stdio.h>

int main()
{
	
	int j, m, d;
	
	printf("---------------------------------\n");
	printf("KONVERSI WAKTU\n");
	printf("---------------------------------\n");
	
	printf("Masukkan Waktu Dalam Detik : ");
	scanf("%d", &d);
	
	
	j = d/3600;
	m = d % 3600/60;
	d = d % 60;
	
	printf("\n-------------------------------------------------------------------\n");
	printf("HASIL KONVERSI WAKTU ADALAH %d Jam, %d Menit, %d detik\n", j, m, d);
	printf("-------------------------------------------------------------------\n");
	
	
	return 0;
	
}
