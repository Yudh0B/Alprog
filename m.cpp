#include <iostream>
#include <conio.h>

using namespace std;

void luas()
{
	int luas , p, l, hasil;
	cout<<"panjang : ";
	cin>>p;
	cout<<"lebar : ";
	cin>>l;
	luas=p*l;
	hasil=luas;
	cout<<"\nLuas = "<<hasil;
}

main ()
{
	luas();
	getch();
}
