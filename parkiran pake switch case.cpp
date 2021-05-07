#include <stdio.h>
#include <conio.h>

int main ()
{
	int m, k, L, B, A, Biaya, BiayaAwal;
	printf("masukkan jam masuk parkiran : ");
	scanf("%d", &m);
	printf("masukkan jam keluar parkiran : ");
	scanf("%d", &k);
	printf("masukkan biaya 2 jam pertama : ");
	scanf("%d", &A);
	L=k-m;
	scanf("%d", &L);
	switch(L)
   {
      case L>=2 : printf("Nasi Padang sudah di pesan harap menunggu beberapa menit\n");break;
      case L<2 : printf("Pempek Palembang sudah di pesan harap menunggu beberapa menit\n");break;
   }

