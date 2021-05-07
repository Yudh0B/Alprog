#include <stdio.h>

void ubah_nilai (int *x)//Membuat fungsi ubah_nilai dan mendeklarasikan *x sebagai parameter bertipe integer
{
 *x=*x+1;/*Membuat perintah yang dijalankan pada fungsi*/
}

 main()
{
    int a=9;//mendeklarasikan nilai a=5 sebagai integer
    printf("Nilai A Awal = %d\n",a);//Menampilkan nilai A awal
    ubah_nilai (&a);//Memanggil fungsi ubah_nilai
    printf("Nilai A Akhir = %d",a);//Menampilkan nilai A akhir setelah melalui proses di dalam fungsi yang dipanggil
}

