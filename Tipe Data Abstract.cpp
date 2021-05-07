#include <iostream>
using namespace std;

//membuat tipe data abstrak
typedef struct {
    int nim;
    string nama;
    int ta;
}
mhs;

void dataMahasiswa(int nim, string nama, int ta){
    cout<<"NIM Mahasiswa   : "; cin>>nim;
    cout<<"Nama Mahasiswa  : "; cin>>nama;
    cout<<"TA Mahasiswa    : "; cin>>ta;
}

int main(){
    int nim;
    string nama;
    int ta;
    //menggunakan tipe data abstract
    mhs m1; //mendeklarasikan variabel dengan tipe mahasiswa

    //menggunakan atribut dalam variabel mahasiswa
    m1.nim=21060118120046;
    m1.nama="Rafi Fistra Ali";
    m1.ta=2018;

    cout<<"NIM Mahasiswa  1 : "<<m1.nim<<endl;
    cout<<"Nama Mahasiswa 1 : "<<m1.nama<<endl;
    cout<<"TA Mahasiswa   1 : "<<m1.ta<<endl;

    mhs m2;
    cout<<"NIM Mahasiswa  2 : "; cin>>m2.nim;
    cout<<"Nama Mahasiswa 2 : "; cin>>m2.nama;
    cout<<"TA Mahasiswa   2 : "; cin>>m2.ta;

    dataMahasiswa(nim, nama, ta);
    return 0;
}

