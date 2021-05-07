#include <iostream>
#include <conio.h>

using namespace std;

void fuOverload (void)
{
	cout<<"Ini Adalah Fungsi Overload \n";
}

float fuOverload (float bil1,float bil2)
{
	float operasi;
	operasi= (bil1+bil2)*(bil1-bil2);
	return operasi;
}

main()
{
    fuOverload();    float a,b;
    cout<<"Masukkan Nilai A = ";cin>>a;
    cout<<"Masukkan Nilai B = ";cin>>b;
	cout<<endl<<"Hasilnya Adalah  "<<fuOverload(a,b);
	return 0;
}
