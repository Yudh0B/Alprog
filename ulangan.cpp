#include <iostream>
#include <math.h>
#include <conio.h>

using namespace std;
int main()
{
	int apel, orang, sisa, dat;
	cout <<"masukkan jumlah apel";
	cin >>apel;
	cout <<"masukkan jumlah orang";
	cin >>orang;
	sisa = apel%orang;
	cout <<sisa;
	return 0;
}
