#include <iostream>
#include <conio.h>
using namespace std;

long faktorial (int i)
{
	if (i>1)
	return (i * faktorial (i-1));    else
    return 1;
}
int main ()
{
	int j;
	cout<<"Masukkan Nilai Yang Ingin Anda faktorialkan : ";
    cin>>j;
    cout<<j<<"!= "<<faktorial (j)<<endl;
    return 0;
}

