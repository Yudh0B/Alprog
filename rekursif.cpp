#include<iostream>
using namespace std;

int hit_luas(int panjang, int lebar){
int luas=panjang*lebar;
return luas;
}

int main(){
int a,b, hasil;
cout<<"Program Menghitung luas Persegi Panjang"<<endl;
cout<<"---------------------------------------"<<endl;
cout<<"Masukkan nilai panjang : "; cin>>a;
cout<<"Masukkan nilai lebar : "; cin>>b;
hasil=hit_luas(a,b);
cout<<"Luas persegi panjang adalah : "<<hasil<<endl;
return 0;
}

