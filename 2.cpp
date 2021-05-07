#include <stdio.h>

typedef struct{
int nim;//Mendeklarasikan nim sebagai integer
float ipk;//Mendeklarasikan ipk sebagai float
} Mahasiswa;
Mahasiswa m;
Mahasiswa *p=&m;//membuat data *p sama dengan data &m

int main(){
m.nim=140101;//Memasukkan nilai nim=4153
m.ipk=3.80;//Memasukkan nilai ipk= 3.80
printf("nim= %d\n",m.nim);//Menampilkan nim
printf("ipk= %f\n",m.ipk);//Menampilkan ipk

p->ipk =3.02;//Memasukkan nilai ipk=3.02 dengan cara pointer
p->nim= 130095;//Memasukkan nilai nim=4188 dengan cara pointer
printf("Nim= %d\n",p->nim); //Menampilkan nim dengan cara /pointer
printf("ipk= %f\n",p->ipk); //Menampilkan ipk dengan cara /pointer
printf("Nim= %d\n",m.nim); //Menampilkan nim dengan cara /struct biasa
printf("ipk= %f\n",m.ipk); //Menampilkan ipk dengan cara /struct biasa
return 0;
}

