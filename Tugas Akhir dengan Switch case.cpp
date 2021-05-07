#include<iostream>
#include<conio.h>
using namespace std;
int main ()
{
	int tanggal, Bulan;
	cout<<"Masukkan Tanggal Lahir : ";
	cin>>tanggal;
	cout<<"Masukkan Bulan Lahir : ";
	cin>>Bulan;
	switch(Bulan)
	{
		case 1:
			if(tanggal>=20)
			{
				cout<<"Zodiak Anda Aquarius";
				break;
			}
			else
			{
				cout<<"Zodiak Anda Capricorn";
				break;
			}
			break;
		case 2:
			if(tanggal>=19)
			{
				cout<<"Zodiak Anda Pisces";
				break;
			}
			else
			{
				cout<<"zodiak Anda Aquarius";
				break;
			}
			break;
		case 3:
			if(tanggal>=21)
			{
				cout<<"Zodiak Anda Aries";
				break;
			}
			else
			{
				cout<<"Zodiak Anda Pisces";
				break;
			}
			break;
		case 4:
			if(tanggal>=20)
			{
				cout<<"Zodiak Anda Taurus";
				break;
			}
			else
			{
				cout<<"Zodiak Anda Aries";
				break;
			}
			break;
		case 5:
			if(tanggal>=21)
			{
				cout<<"Zodiak Anda Gemini";
				break;
			}
			else
			{
				cout<<"Zodiak Anda Taurus";
				break;
			}
			break;
		case 6:
			if(tanggal>=21)
			{
				cout<<"Zodiak Anda Cancer";
				break;
			}
			else
			{
				cout<<"Zodiak Anda Gemini";
				break;
			}
			break;
		case 7:
			if(tanggal>=23)
			{
				cout<<"Zodiak Anda Leo";
				break;
			}
			else
			{
				cout<<"Zodiak Anda Cancer";
				break;
			}
			break;
		case 8:
			if(tanggal>=23)
			{
				cout<<"Zodiak Anda Virgo";
				break;
			}
			else
			{
				cout<<"Zodiak Anda Leo";
				break;
			}
			break;
		case 9:
			if(tanggal>=23)
			{
				cout<<"Zodiak Anda Libra";
				break;
			}
			else
			{
				cout<<"Zodiak Anda Virgo";
				break;
			}
			break;
		case 10:
			if(tanggal>=23)
			{
				cout<<"Zodiak Anda Scorpio";
				break;
			}
			else
			{
				cout<<"Zodiak Anda Libra";
				break;
			}
			break;
		case 11:
			if(tanggal>=22)
			{
				cout<<"Zodiak Anda Sagitarius";
				break;
			}
			else
			{
				cout<<"Zodiak Anda Scorpio";
				break;
			}
			break;
		case 12:
			if(tanggal>=22)
			{
				cout<<"Zodiak Anda Capricorn";
				break;
			}
			else
			{
				cout<<"Zodiak Anda Sagitarius";
				break;
			}
			break;
		}
}
