#include <iostream>
#include <conio.h>
using namespace std;
int main()
{char nama[100][100];
int n;
cout<<"Masukkan Jumlah Mahasiswa: "; cin>>n;
     for (int i=0;i<n;i++)
    {
		cout<<"Masukkan Nama Mahasiswa: "; cin>>nama[i];
	}
	system ("cls");
cout<<"Menampilkan Data Mahasiswa"<<endl;
     for (int i=0;i<n;i++)
{cout<<"Nama Mahasiswa ke-"<<i+1<<" :"<<nama[i]<<endl;}
}

