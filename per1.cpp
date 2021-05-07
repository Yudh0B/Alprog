#include <iostream>
#include<fstream>
using namespace std;
int main()
{
ofstream fileteks;
fileteks.open("random.txt"); /*membuat file jika belum ada*/
fileteks<<"Aku Cinta Undip."<<endl; /*ini fungsi penulisan ke dalam file*/
fileteks.close(); //tutup operasi pengelolaan file
}

