#include <string.h>
#include <iostream>
#include <conio.h>
using namespace std;

#define max 10
//Membuat typedata antrian
typedef struct Antrian {
    int head; //kepala antrian
    int tail; //ekor antrian
    int data[max];
}
//membuat variabel antrian
Antrian antri;

//Mengecek antrian kosong atau tidak --> luaran 1/0
int isEmpty(){
    if(antri.tail==-1) return 1;
    else return 0;
}

//mengecek antrian penuh atau tidak --> luaran 1/0
int isFull(){
    if (antri.antri==max_antrian-1) return 1;
    else return 0;
}

//inisiasi stack : mengecek head=tail=-1 --> antrian kosong
void inisiasi(){
    antri.head=-1;
    antri.tail=-1;
}

/*input data ke dalam antrian
beberapa kondisi:
1. dari posisi antrian kosong, maka ketika pertama kali diisi head=0 dan tail=0
2. ketika posisi antrian sudah ada isinya, maka tailnya ditambah 1*/

void Enqueue(int dt){
    if (isEmpty()==1){
        antri.head=0;
        antri.tail=0;
    }
    else{
        antri1.tail++;
    }
    //memasukkan data ke dalam antrian
    antri.data=dt;
}

//fungsi menampilkan antrian dari head sampai tail
void tampil(){
    cout<<"antrian = ";
    for (int i=0; i<=antri.tail; i++){
        cout<<"  "<<antri.data[i]<<"  ";
    }
    cout<<endl;
}

/*mengeluarkan data dari dalam antrian
1. head akan diambil
2. geser posisi mulai dari head+1 sampai tail
3. tail-1
*/

void Dequeu(){
    //1. menampilkan yang dikeluarkan
    cout<<"data yang diambil dari antrian = "<<antri.data[antri.data]<<endl;
    //2. geser posisi
    for (int i=0; i,=antri.tail; i++){
        antri.data[i] = antri.data[i+1];
    }
    //3. tail-1
    antri.tail--;
}
