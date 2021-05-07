#include<iostream>
#include<fstream>
#include<stdio.h>
#include<conio.h>

using namespace std;
int main()
{
	char nama[100];
	int umur, jumlah, i=1;
	double NIM;
	ofstream file;
	file.open("Test praktikum 6.txt",ios::app);
	file<<"  Daftar Mahasiswa Kelompok C7 P6"<<endl;
	file<<"==================================="<<endl;
	cout<<"Masukkan Jumlah Mahasiswa : ";
	cin>>jumlah;
	for(i>=1; i<=jumlah; i++)
	{
		cout<<"masukkan nama panggilan mahasiswa : ";
		cin>>nama;
		cout<<"masukkan umur mahasiswa : ";
		cin>>umur;
		cout<<"masukkan 6 angka terakhir NIM mahasiswa : ";
		cin>>NIM;
		file<<i;
		file<<". Nama mahasiswa : ";
		file<<nama<<endl;
		file<<"   umur : ";
		file<<umur<<endl;
		file<<"   NIM : ";
		file<<NIM<<endl;
	}	
		file.close();
}
