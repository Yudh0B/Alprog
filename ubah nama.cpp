#include <stdio.h>
int main(){
int result;/*deklarasi semua nama file sebagai array char*/
char oldname[]="namalama.txt"; //nama sebelum diubah
char newname[]="namabaru.txt"; //nama setelah diubah
result=rename(oldname,newname);//ini fungsi rename
if(result==0) //fungsi pembanding
puts("file succesfully renamed");
else
perror("Error renaming file");
return 0;}

