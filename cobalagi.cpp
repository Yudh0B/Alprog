#include <iostream>
#include <conio.h>

using namespace std;
main() {
	int tugas, UTS, UAS, Akhir=(UTS*0.3)+(UAS*0.4)+(tugas*0.3), NIM ;
	cout<<"Masukkan NIM : ";cin>>NIM;
	cout<<endl;
	cout<<"Masukkan Nilai Tugas :";cin>>tugas;
	cout<<endl;
	cout<<"Masukkan Nilai UTS : ";cin>>UTS;
	cout<<endl;
	cout<<"Masukkan Nilai UAS : ";cin>>UAS;
	cout<<endl;
	cout<<"Nilai Akhir : ";cout<<Akhir;
	cout<<endl;
	cout<<"=============================";
	cout<<endl;
	cout<<"No. NIM Tugas UTS UAS  Akhir";
	cout<<endl;
	cout<<"=============================";
	cout<< "1";cout<<NIM;cout<<tugas;cout<<UTS;cout<<UAS;cout<<Akhir;
}
