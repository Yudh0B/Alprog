#include <stdio.h>
#include <conio.h>

int main ()
{
	int m, k, L, B, A, Biaya, BiayaAwal;
	printf("masukkan jam masuk parkiran : ");
	scanf("%d", &m);
	printf("masukkan jam keluar parkiran : ");
	scanf("%d", &k);
	L=k-m;
	if(L>0, L<=12){
	printf("masukkan biaya 2 jam pertama : ");
	scanf("%d", &A);
	if(L>=2, L<=12)
	{
		B=L-2;
		Biaya=(A*2)+(B*(1000));
		printf("uang parkir : %d", Biaya);
		return 0;
	}
	else
	{
		if(L<2, L>0, L<=12)
		{
			BiayaAwal=L*A;
			printf("uang parkir : %d", BiayaAwal);
			return 0;
		}
		else
		{
			printf("invalid input");
			return 0;
		}
	}
}
else
{
	printf("kang parkir tolol");
}
}
