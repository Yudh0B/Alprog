#include <iostream>
#include <stdio.h>
#include <conio.h>


using namespace std;


char to_lowercase(char c){
    if (c >= 'A' && c <= 'Z'){
        return c + 32;
    }
    
    return c;
}

int main()
{
    string arrOfWord[10];
    string arrOfMeans[10];
    
    
    
    for (int i = 0; i < 10; i++){
        cout << "Silakan Masukkan Sebuah Kata dan Artinya: \n(Spasi pertama menyatakan pemisah antara kata dan arti. Kata ditulis dalam huruf kecil)" << endl;
        cin >> arrOfWord[i];
        string temp;
        getline(cin, temp);
        arrOfMeans[i] = temp;
        
    }
    
    
    while(true){
        cout << "Silakan cari kata yang ingin anda ketahui artinya:" << endl;
        string temp;
        cin >> temp;
        
        for (char &c: temp){
            c = to_lowercase(c);
        }
        
        for (int i = 0; i < 10; i++){
            if (temp == arrOfWord[i]){
                cout << arrOfMeans[i] << endl;
                break;
            }
            else if (i == 9){
                cout << "Kata tidak ditemukan." << endl;
            }
        }
        
    }
       
    return 0;
}
