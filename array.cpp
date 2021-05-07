#include <iostream>
#include <conio.h>

using namespace std;
int main()
{
	int nilai[10], i, n;
	float rerata, jumlah=0;
	cout<<"Masukkan Jumlah Mata Kuliah : ";cin>>n;
	for(i=1;i<=n;i++)
	{
		cout<<"mata kuliah ke-"<<i<<":";cin>>nilai[i];
		jumlah=jumlah+nilai[i];
	}
	rerata=jumlah/n;
	cout<<"total nilai mata kuliah adalah : "<<jumlah<<endl;
	cout<<"rata-rata ni;ai mata kuliah adalah : "<<rerata<<endl;
	return 0;
}
