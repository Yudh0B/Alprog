#include<iostream>
#include<conio.h>

using namespace std;
#include <iostream>
#include <conio.h>

using namespace std;

void luaspersegi()
{
	float sisi;
	cout<<"masukkan sisi persegi panjang : ";cin>>sisi;
	getch();
	cout<<"luas persegi panjang adalah : "<<sisi*sisi<<endl;
	getch();
}

void luassegitiga()
{
	float alas, tinggi;
	cout<<"masukkan alas segitiga : ";cin>>alas;
	cout<<"masukkan tinggi segitiga : ";cin>>tinggi;
	cout<<"Luas segitiga adalah : "<<(alas*tinggi)*0.5;
	getch();
}

void luaspersegipanjang()
{
	float panjang, lebar;
	cout<<"masukkan panjang persegi panjang : ";cin>>panjang;
	cout<<"masukkan lebar persegi panjang : ";cin>>lebar;
	cout<<"luas persegi panjang adalah : "<<panjang*lebar;
	getch();
}

int main()
{
	int i;
	for(i=1; i<=1024; i++)
	{
		int pilihan;
		cout<<"Daftar Perhitungan Luas : "<<endl;
		cout<<"1. Luas Segitiga"<<endl;
		cout<<"2. Luas Persegi"<<endl;
		cout<<"3. Luas Persegi Panjang"<<endl;
		cout<<"Pilih salah satu dari ketiga pilihan di atas : ";
		cin>>pilihan;
		switch (pilihan)
		{
			case 1: luassegitiga ();break;
			case 2: luaspersegi ();break;
			case 3: luaspersegipanjang ();break;
			getch();
			cout<<endl;
		}
		cout<<endl<<endl;
	}
}
