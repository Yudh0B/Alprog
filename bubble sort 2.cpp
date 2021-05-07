#include <iostream>
#include <conio.h>
#define n 5

int main() {
	int A[n]= {7,22,17,5,12};
	int X,I,K,flag;
	
	printf("sebelum diurutkan: \n");
	for(I=0;I<=n-1;I++)
	printf("%d",A[I]);
	printf("\n");
	K=0;
	flag=1;
	while (K<=n-2 && flag==1) {
		I=0;flag=0;
		while(I<=n-1-K) {
			if(A[I]>A[I+1]){
				flag=1;
				X=A[I];
				A[I]=A[I+1];
				A[I]=X;
			}
			I++;
		}
		K++;
	}
	printf("sesudah diurutkan : \n");
	for(I=0; I<=n-1; I++)
	printf("%d", A[I]);
	getch();
}
