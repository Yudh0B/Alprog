#include <iostream>
#include <conio.h>

using namespace std;
int main()
{
	int data [2][4]={{4,3,2,1},{5,6,7,8}};
	for (int a=0; a<2; a++)
	{
		for (int b=0; b<4; b++)
		{
			cout<<"data["<<a<<"]"<<"["<<b<<"]="<<data[a][b]<<endl;
		}
	}
	return 0;
}
