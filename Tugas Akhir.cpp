#include<iostream>
#include<conio.h>
#include<fstream>
#include<stdlib.h>
using namespace std;
int main ()
{
	
	int tanggal, bulan, i=1, pengulang;
	char nama[100];
	ofstream file;
	file.open("Tugas Akhir.txt" ,ios::app);
	for(i>=1; i<=1024; i++)
	{
	cout<<"Masukkan Nama panggilan : ";
	cin>>nama;
	file<<i;
	file<<". Nama : "<<nama<<endl;
	cout<<"Masukkan Tanggal Lahir : ";
	cin>>tanggal;
	cout<<"Masukkan Bulan Lahir Dalam Angka : ";
	cin>>bulan;
	file<<"   Tanggal/Bulan lahir : "<<tanggal<<"/"<<bulan<<endl;

   	if ((tanggal >=21 && bulan == 3)||(tanggal <=19&& bulan == 4))
        {
       		cout<<"Zodiak Anda adalah Aries"<<endl;
       		file<<"   Zodiak"<<nama<<"adalah Aries"<<endl<<endl;
       	}
   	else
       if ((tanggal >=20 && bulan == 4)||(tanggal <=20 && bulan == 5))
       	{
      		cout<<"Zodiak Anda adalah Taurus"<<endl;
      		file<<"   Zodiak"<<nama<<"adalah Taurus"<<endl<<endl;
    	}
   	else
       if ((tanggal >=21 && bulan == 5)||(tanggal <=20 && bulan == 6))
      	{
	   		cout<<"Zodiak Anda adalah Gemini"<<endl;
	   		file<<"   Zodiak"<<nama<<"adalah Gemini"<<endl<<endl;
	   	}
   	else
       if ((tanggal >=21 && bulan == 6)||(tanggal <=22 && bulan == 7))
       	{
       		cout<<"Zodiak Anda adalah Cancer"<<endl;
       		file<<"   Zodiak"<<nama<<"adalah Cancer"<<endl<<endl;
       	}
   	else
       if ((tanggal >=23 && bulan == 7)||(tanggal <=22 && bulan == 8))
      	{

	  		cout<<"Zodiak Anda adalah Leo"<<endl;
	  		file<<"   Zodiak"<<nama<<"adalah Leo"<<endl<<endl;
		}
   	else
       if ((tanggal >=23 && bulan == 8)||(tanggal <=22 && bulan == 9))
       	{
      		cout<<"Zodiak Anda adalah Virgo"<<endl;
      		file<<"   Zodiak"<<nama<<"adalah Virgo"<<endl<<endl;
      	}
   	else
       if ((tanggal >=23 && bulan == 9)||(tanggal <=22 && bulan == 10))
       	{
      		cout<<"Zodiak Anda adalah Libra"<<endl;
      		file<<"   Zodiak"<<nama<<"adalah Libra"<<endl<<endl;
      	} 
   	else
       if ((tanggal >=23 && bulan == 10)||(tanggal <=21 && bulan == 11))
       	{
      		cout<<"Zodiak Anda adalah Scorpio"<<endl;
      		file<<"   Zodiak"<<nama<<"adalah Scorpio"<<endl<<endl;
      	}
   	else
       if ((tanggal >=22 && bulan == 11)||(tanggal <=21 && bulan == 12))
       	{
	   		cout<<"Zodiak Anda adalah sagitarius"<<endl;
	   		file<<"   Zodiak"<<nama<<"adalah Sagitarius"<<endl<<endl;
	   	}
   	else
       if ((tanggal >=22 && bulan == 12)||(tanggal <=19 && bulan == 1))
       	{
       		cout<<"Zodiak Anda adalah Capricorn"<<endl;
       		file<<"   Zodiak"<<nama<<"adalah Capricorn"<<endl<<endl;
       	}
   	else
       if ((tanggal >=20 && bulan == 1)||(tanggal <=18 && bulan == 2))
       	{
       		cout<<"Zodiak Anda adalah Pisces"<<endl;
       		file<<"   Zodiak"<<nama<<"adalah Pisces"<<endl<<endl;
       	}
   	else
        if ((tanggal >19 && bulan == 2)||(tanggal <=20 && bulan == 3))
        {
      		cout<<"Zodiak Anda adalah Aquarius"<<endl;
      		file<<"   Zodiak"<<nama<<"adalah Aquarius"<<endl<<endl;
      	}
	else;


   cout<<"_____________________________________________________\n\n";
   cout<<"Terimakasih Sudah Mencoba\n";
   cout<<"Pilih 1 untuk Mengulang program dan 2 untuk menutup program : ";
   cin>>pengulang;
   switch (pengulang)
   {
   	case 1: system("cls");break;
   	case 2: file.close();return 0;break;
}
}
}
