#include <iostream>

bool kondisi;
int value;

using namespace std;

bool prima (int val)
{
	if (val < 0) val *= -1;
	for (int x = 2; x < val; x++)
	{
		if (val == x) kondisi = true;
		else
		{
			if ((val % x) == 0)
			{
				kondisi = false;
				x = val;
			}
			else
			{
				kondisi = true;
			}
		}
	}
	return kondisi;
}

void deteksiBilanganPrima ()
{
	cout<<"masukkan nilai : ";
	cin>>value;
	if (prima (value) == true) cout<<value<<" adalah bilangan prima"<<endl;
	else cout<<value<<" tidak termasuk bilangan prima"<<endl;
}

int main ()
{
	int i;
	for (i=1; i<=1024; i++)
	{
		deteksiBilanganPrima ();
	}
}
