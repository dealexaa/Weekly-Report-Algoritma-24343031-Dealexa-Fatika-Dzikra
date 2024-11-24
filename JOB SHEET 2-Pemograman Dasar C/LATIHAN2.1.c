#include <stdio.h>
int main() 
{
// membuat variabel
 char name [50];
 
 printf("Hello,siapa nama lengkapmu?\n");
 scanf("%[^\n]s", name);
 
 
 printf("\n-------------------------------------------------------------\n");
 printf("Selamat Datang %s dalam Pemograman C!\n", name);
 printf("-------------------------------------------------------------\n");
 return 0;
}
