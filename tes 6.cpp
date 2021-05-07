#include<iostream>
#include<fstream>
#include<conio.h>
using namespace std;
int main()
{
	char nama[100];
	int umur, i=1, jumlah;
	ofstream fileteks;
	cout<<"masukkan jumlah mahasiswa yang ingin didata : ";
	cin>>jumlah;
	fileteks.open("Test praktikum 6.txt",ios::app);
	fileteks<<"Data Mahasiswa"<<endl;
		cout<<"Masukkan nama Mahasiswa : ; 
		cin>>nama;
		cout<<"Masukkan umur : ";
		cin>>umur;
		fileteks<<nama" "umur<<endl
		fileteks.close(out);
		cout<<"Sukses menambah data.";
		getch();
		return 0;
}
