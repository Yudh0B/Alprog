#include <iostream>
#include <conio.h>

using namespace std;
int main()
{
	int barang [2][7];
	for (int i=1; i<=2; i++)
	{
		for (int j=1; j<=7; j++)
		{
			cout<<"Gudang Nomor : "<<i <<", Hari Ke-"<<j <<":";
			cin>>barang[i][j];
		}
	}
	cout<<endl<<"lihat stok barang :"<<endl<<endl;
	for(int i=1; i<=2; i++)
	{
		for(int j=1; j<=7; j++)
		{
			cout<<"Gudang Nomor "<<i <<", Hari ke-"<<j <<":"<<barang[i][j]<<endl;
		}
	}
	getch();
	return 0;
}
