#include <conio.h>
#include <string.h>
#include <iostream>
using namespace std;


#define MAX_STACK 10

typedef struct{
    int top;
    char data[10][10];
    } STACK;

//membuat variabel stack
STACK st;

//fungsi mengecek kosong
int isEmpty(){
    if (st.top==-1) return 1;
    else return 0;
    }

int isFull(){
    if (st.top=MAX_STACK-1) return 1;
    else return 0;
    }

void init_stack(){
    st.top=-1;
    }

//memasukkan data di stack
void Push(char d[10]){
    st.top++;
    strcpy(st.data[st.top],d);
    }

void Pop(){
    cout<<"Data yang terambil= "<<st.data[st.top];
    st.top--;
}

void tampilStack(){
    for(int i=st.top;i>=0;i--){
        cout<<"Data ke: "<<i<<"= "<<st.data[i]<<endl;
        }
    }

int main(){
    int pilihan;
    init_stack();
    char dt[10];
    do{
        cout<<"1. Push"<<endl;
        cout<<"2. Pop"<<endl;
        cout<<"3. Cetak"<<endl;
        cout<<"4. Clear"<<endl;
        cout<<"5. Exit "<<isFull()<<st.top<<endl;
        cout<<"Masukkan Pilihan(1-5): ";
        cin>>pilihan;
        switch(pilihan){
        case 1: if(isFull()!=1){
                    cout<<"Data= ";
                    cin>>dt;
                    Push(dt);
                }
                else cout<<"Stack sudah penuh"<<endl;
                break;
        case 2: if(isEmpty()!=1){
                    Pop();
                }
                else cout<<"Stack masih kosong"<<endl;
                break;
        case 3: if(isEmpty()==0) tampilStack();
                else cout<<"Stack masih kosong"<<endl;
                break;
        case 4: init_stack();
                cout<<"Stack sudah kosong"<<endl;
                break;
        }

    }
    while(pilihan!=5);

}
