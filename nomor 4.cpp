#include <iostream>
#include <conio.h>

using namespace std;

void luas (int luas , int p, int l)
{
	luas=p*l;
}

main()
{
	int panjang, lebar, hasil;
	cout<<"panjang : ";
	cin>>panjang;
	cout<<"lebar : ";
	cin>>lebar;
	
	luas(hasil, panjang, lebar);
	cout<<"\n Luas = "<<hasil;
	getch();
}
