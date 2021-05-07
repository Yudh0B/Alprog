#include <stdio.h>
#include <conio.h>


int main ()
{
	int stok[4][2][7], x, y, z;
	int b;
	for (x=0; x<=1; x++)
	{
		for (y=0; y<=3; y++)
		{
			for (z=0; z<=6; z++)
			{
			printf ("KCU %d, KCP %d, Hari %d: ", x+1, y+1,z+1);
			scanf ("%d",&stok[x][y][z]);
			}
		}
	}
	printf ("********************************\n");
	printf ("hasil :\n");
	for (x=0; x<=1; x++)
	{
		for (y=0; y<=3; y++)
		{
			for (z=0; z<=6; z++)
			{
				printf ("KCU %d, KCP %d, Hari %d : %d\n", x+1, y+1,z+1);
            }
		}
	}
	getch ();
	return 0;
}
