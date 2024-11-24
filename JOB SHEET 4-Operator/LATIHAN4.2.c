#include <stdio.h>
int main() 
{
// membuat variabel
 char nama [100], barang [100];
 float harga, total;
 int jumlah;
 
 printf("---------------------------------\n");
 printf("\tSELAMAT DATANG\n");
 printf("---------------------------------\n");
 
 printf("Masukkan Nama Anda : ");
 scanf("%[^\n]s", &nama);
 getchar();
 printf("Masukkan Nama Barang Yang Anda Beli : ");
 scanf("%[^\n]s", &barang);
 
 printf("Masukkan Harga Barang : Rp. ");
 scanf("%f", &harga);
 
 printf("Jumlah Barang Yang Di Beli : ");
 scanf("%i", &jumlah);
 
 total = harga*jumlah;
 
 printf("\n===========================================================\n");
 printf("\t\t\tSELAMAT DATANG");
 printf("\n===========================================================\n");
 printf(" NAMA PEMBELI                    : %s\n ", nama);
 printf("NAMA BARANG                     : %s\n ", barang);
 printf("HARGA BARANG                    : Rp.%.2f\n ", harga);
 printf("JUMLAH BARANG YANG DIBELI       : %i\n ", jumlah);
 printf("--------------------------------------------------------+");
 printf("\n HARGA TOTAL                     : Rp. %.2f ", total);
  printf("\n --------------------------------------------------------\n");
return 0;
}
 
