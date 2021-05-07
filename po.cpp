#include <iostream>
using namespace std;

void duplikasi (int& a, int& b, int& c)
{
 	a*=3;
 	b*=3;
 	c*=3;
}
int main ()
{
 	int x=2, y=3, z=5;
 	duplikasi (x, y, z);
 	cout << "x=" << x << ", y=" << y << ", z=" << z;
 	return 0;
}
