#include <string.h>
#include <conio.h>
#include <iostream>
using namespace std;
#define max_stack 10

/*STACK bisa digambarkan dengan 2 parameter
1. Penunjuk / pointer posisi tertinggi dari data dalam stack --> top
2. Data yang ada dalam STACK
untuk menggambarkan STACK bisa dibuat dengan tipe data abstrak
*/

typedef struct  {
	int top;
	char data[10][10];
} STACK;

//menggunakan stack
STACK st;

void inisiasi_stack() {
		//mengosongkan stack
		st.top=-1;  // mereset
	}

//mengecek stack kosong --> isEmpty() --> luaran 1/0
int isEmpty() {
	//jika top=-1 maka stack kosong untuk kondisi stack ada isinya
	if (st.top == -1) return 1;
	else return 0;
}

//mengecek stack penuh atau tidak --> isFull() --> luaran 1 / 0
int isFull() {
	//jika top = max_stack-1 maka stack penuh, untuk kondisi yang stack tidaak penuh
	if (st.top == max_stack-1) return 1;
	else return 0;
}

//memasukan data ke dalam stack
void push(char dt[10]) {
	//geser posisi top ke atas (+1) 
	st.top++;
	//masukan data ke dalam stack--> menggunakan fungsi strcpy(target, sumber)
	strcpy(st.data[st.top], dt);
}

//mengambil data dari
void pop() {
	//menggeser posisi pointer top ke bawah (-1)
	cout<<"data yang diambil adalah : " << st.data[st.top]<<endl;
	st.top--;
}

//menampilkan isi stack
void tampil() {
	for (int i=st.top; i>=0; i--) {
		cout<<"data ke - "<<i<<" = "<<st.data[i]<<endl;
	}
}

int main() {
	char d[10];
	int pilihan;
	inisiasi_stack();  //mengosongkan stack --> top=-1
	
	do {
	cout<<"1. Memasukan data ke dalam stack"<<endl;
	cout<<"2. Mengeluarkan data dari stack"<<endl;
	cout<<"3. Menampilkan isi stack"<<endl;
	cout<<"4. Mengosongkan Stack"<<endl;
	cout<<"5. Keluar"<<endl;
	
	cout<<"Masukan pilihan menu (1-5) : ";
	cin>>pilihan;
	
	switch (pilihan) {
		case 1 : if (isFull()==0) {
					cout<<"Data yang dimasukan : ";
					cin>>d;
					push(d);
				} 
				else cout<<"STACK Penuh !"<<endl;
				break;
		case 2 : if (isEmpty()==0) {
					pop();
				}
				else cout<<"STACK Kosong !"<<endl;
				break;
		case 3: if (isEmpty()==0) {
				tampil();
				}
				else cout<<"STACK Kosong !"<<endl;
				break;
		case 4: inisiasi_stack();
				break;
	
		}
	}
	while (pilihan!=5);
	
	return 0;
}

	
	





	

