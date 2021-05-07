#include <stdio.h>
int main (){
char nama[] = "Suhu Wong"; //mendeklarasikan nama
char *p; //mendeklarasikan *p
p=nama;//Menunjuk nama array secara langsung
while (*p!=NULL){ //memperoleh nilai *p
printf("%c",*p); //menampilkan nilai *p
p++;
 	}
printf("\n");
p=&nama[8]; /*Menunjuk nama array secara ekssplisit ke elemen pertama */
while (*p!=NULL){ //memperoleh nilai *p
printf("%c",*p); //menampilkan nilai *p
p--;
}
printf("\n");
return 0;
}


