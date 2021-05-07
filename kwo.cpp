#include <iostream>

using namespace std;

/*
antrian
algoritma : 
1. First In First out
2. Terdiri dari kepala diam di depan dan ekor tergeser ke belakang
3. kondisi antrian kosong adalah pada saat kepala = -1 dan ekor = -1
4. kondisi antrian mulai terisi adalah kepala = 0 dan ekor = 0, 
	untuk kondisi antrian penuh, nilai kepala = 0 dan ekor = max-1
5. diikuti oleh ekor++ inkremen 1
6. fungsi untuk mengecek kosong atau tidak = isEmpty() dengan hasil akhir 1/0
7. fungsi untuk mengecek penuh atau tidak = isFull() dengan hasil akhir 1/0
8. isi data antrian EnQueue(data)
9. mengeluarkan data DeQueue()
10. mengosongkan antrian reset
*/

//mendefinisikan jumlah maksimum antrian
#define max 10
//membuat tipe data abstrak antrian
typedef struct antrian
{
	int kepala, ekor;
	int data[max];
};

//menggunakan tipe data abstrak antrian
antrian at;

//mmebuat fungsi mengecek antrian kosong atau tidak
int isEmpty()
{
	if (at.kepala==-1) return 1;
	else return 0;
}
//membuat fungsi mengecek antrian penuh atau tidak
int isFull()
{
	if (at.ekor==max-1) return 1;
	else return 0;	
}
//membuat fungsi reset atau mengosongkan
void reset()
{
	at.kepala=-1;
	at.ekor=-1;
}
//membuat fungsi input, 
void Enqueue(int dt)
{
	//kondisi antrian mulai terisi adalah kepala = 0 dan ekor = 0
	if(isEmpty()==1)
	{
		at.kepala=0;
		at.ekor=0;
	}
	//untuk kondisi tidak kosong
	else
	{
		at.ekor++;
	}
//memasukkan datanya
	at.data[at.ekor]=dt;
}
//fungsi untuk mengeluarkan data dari antrian
void Dequeue()
{
	//tampilkan data yang dikeluarkan
	cout<<"data yang dikeluarkan = "<<at.data[at.kepala]<<endl;
	//memindahkan posisi data
	for(int i=0; i<=at.ekor; i++)
	{
		//fungsi pemindahan
		at.data[i]=at.data[i+1];
	}
	if(at.ekor==0)
	{
		at.ekor=-1;
		at.kepala=-1;
	}
	else
	{
		at.ekor--;
	}
}
//fungsi untuk menampilkan antrian
void tampil()
{
	cout<<"data antrian = "<<endl;
	for(int i=0; i<=at.ekor; i++)
	{
		cout<<"  "<<at.data[i];
	}
	cout<<endl;
}

int main()
{
	int pilihan;
	int dt;
	reset();
	while (pilihan !=5)
	{
	cout<<"1. Input data ke dalam antrian\n";
	cout<<"2. Keluarkan data dari antrian\n";
	cout<<"3. Tampilkan isi antrian\n";
	cout<<"4. Reset antrian\n";
	cout<<"5. Keluar\n";
	cout<<"Masukkan Pilihan (1-5) : ";
	cin>>pilihan;
	switch (pilihan)
	{
		case 1 : 
			if (isFull()==0)
			{
				cout<<"Data yang dimasukkan : ";
				cin>>dt;
				Enqueue(dt);
			}
			else
			{
				cout<<"Antrian Penuh !!"<<endl;
			}
			break ;
		case 2 :
			if (isEmpty()==0)
			{
				Dequeue();
			}
			else
			{
				cout<<"Antrian Kosong !!"<<endl;
			}
			break;
		case 3 :
				if (isEmpty()==0)
			{
				tampil();
			}
			else
			{
				cout<<"Antrian Kosong !!"<<endl;
			}
			break;
		case 4 :
			reset();
			break;
	}
	}	
}

