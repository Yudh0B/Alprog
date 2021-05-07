#include <iostream>
#include <conio.h>

using namespace std;

void luaskotak()
{
	float sisi;
	cout<<"masukkan sisi persegi panjang : ";cin>>sisi;
	getch();
	cout<<"luas persegi panjang adalah : "<<sisi*sisi<<endl;
}

int main()
{
	luaskotak ();
	getch();
}
