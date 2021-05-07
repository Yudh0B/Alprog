#include <string.h>
#include <iostream>
#include <conio.h>
#define max 10
using namespace std;

//Membuat tipe data bentukan yaitu doubeStack
typedef struct {
int top[2];
char data[10][10];
}doubleStack;

//Deklarasi variabel ds dengan tipe data doubleStack
doubleStack ds;

//Memasukkan data yang diinputkan user ke stack bagian kiri
void pushA (char d[10]){
ds.top[0]++; //
strcpy(ds.data[ds.top[0]], d); //Menyalin data yang telah dimasukkan ke dalam stack bagian kiri
}

//Memasukkan data yang diinputkan user ke stack bagian kanan
void pushB (char d[10]){
ds.top[1]--; //menggeser pointer ke kiri
strcpy(ds.data[ds.top[1]], d); //Menyalin data yang telah dimasukkan ke dalam stack bagian kanan
}

//Mengeluarkan data pada stack bagian kiri
void popA (){
cout<<"Mengambil data "<<ds.data[ds.top[0]]<<" dari stack."<<endl; //Menampilkan data yang diambil dari stack bagian kiri
}

//Mengeluarkan data pada stack bagian kanan
void popB (){
cout<<"Mengambil data "<<ds.data[ds.top[1]]<<" dari stack."<<endl; //Menampilkan data yang diambil dari stack bagian kanan
}

//Mengecek kondisi kedua stack apakah kosong atau tidak 
int isEmpty(){
if(ds.top[0] == -1 && ds.top[1] == max) return 1;
return 0;
}

//Mengecek kondisi stack bagian kiri apakah kosong atau tidak
int isEmptyA(){
if(ds.top[0] == -1) return 1;
return 0;
}

//Mengecek kondisi stack bagian kanan apakah kosong atau tidak
int isEmptyB(){
if(ds.top[1] == max) return 1;
return 0;
}

//Mengecek kondisi stack apakah penuh atau tidak
int isFull(){
if(ds.top[0]+1 >= ds.top[1]) return 1;
return 0;
}

//Menampilkan data yang ada dalam stack
void tampil (){
//menampilkan dari data ke 0 sampai data maksimal-1
for (int i=max-1; i>=ds.top[1]; i--) { 
cout<<"data ke - "<<i<<" \t= "<<ds.data[i]<<endl;
}
if(isFull()==0){
for (int i=ds.top[1]-1; i>=(max/2); i--) { 
cout<<"data ke - "<<i<<" \t= "<<endl;
}
for (int i=(max/2)-1; i>=ds.top[0]+1; i--) { 
cout<<"data ke - "<<i<<" \t= "<<endl;
}}
for (int i=ds.top[0]; i>=0; i--) { 
cout<<"data ke - "<<i<<" \t= "<<ds.data[i]<<endl;
}
}

//inisialisasi atau mengosongkan stack
void dSkosong (){
ds.top[0]= -1;
ds.top[1]= max;
}

int main (){
char dt[10];
int pilihan;
dSkosong();  //mengosongkan stack

do {
system("cls");
cout<<"PROGRAM DOUBLE STACK"<<endl;
cout<<endl;
cout<<"ds.top[0] = "<<ds.top[0]<<endl;
cout<<"ds.top[1] = "<<ds.top[1]<<endl;
cout<<"1. Memasukan data ke dalam stack"<<endl;
cout<<"2. Mengeluarkan data dari stack"<<endl;
cout<<"3. Menampilkan isi stack"<<endl;
cout<<"4. Mengosongkan Stack"<<endl;
cout<<"5. Keluar"<<endl<<endl;
cout<<"Masukan pilihan menu (1-5) : ";
cin>>pilihan;

switch (pilihan) {
{
int posisi;
case 1 : if (isFull()==0) {
cout<<"1. Data bagian kiri"<<endl;
cout<<"2. Data bagian kanan"<<endl;
cout<<"Pilihan : ";
cin>>posisi;
switch (posisi){
case 1 : cout<<"Data yang dimasukan : ";
  cin>>dt;
  pushA(dt);
  getch();
  break;
case 2 : cout<<"Data yang dimasukan : ";
  cin>>dt;
  pushB(dt);
  getch();
  break;
  }
}
else cout<<"Stack Penuh"<<endl;
break;
case 2 :if (isEmpty()==0) {
cout<<"1. Data bagian kiri"<<endl;
cout<<"2. Data bagian kanan"<<endl;
cout<<"Pilihan : ";
cin>>posisi;
switch (posisi){
case 1 : if(isEmptyA()==0){
  popA();
  ds.top[0]--; //menggeser pointer ke kiri
  }
  else cout<<"Stack bagian kiri kosong"<<endl;
  getch();
  break;
case 2 : if(isEmptyB()==0){
  popB();
  ds.top[1]++; //menggeser pointer kekanan
    }
  else cout<<"Stack bagian kanan kosong"<<endl;
  getch();
  break;
  }
}
   else cout<<"Stack Kosong"<<endl;
   getch();
break;
}
case 3: if (isEmpty()==0) {
tampil();
}
 else cout<<"Stack Kosong"<<endl;
 getch();
 break;
case 4: dSkosong();
 cout<<"Stack sudah dikosongkan"<<endl;
 getch();
 break;
case 5: break;
default : cout<<"Anda salah memasukkan nomor pilihan menu"<<endl;
getch();
break;
}
}

while (pilihan!=5);

return 0;
}
