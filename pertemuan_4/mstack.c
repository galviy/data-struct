
/* Program   : mtstack.c */
/* Deskripsi : file DRIVER modul stack karakter */
/* NIM/Nama  : */
/* Tanggal   : */
/***********************************/

#include <stdio.h>
#include "tstack.h"
#include "boolean.h"
/* include tstack+boolean */

int main() 
{	/* kamus main */
	Tstack A;
	Tstack B;
	Tstack C;

	char X;
	/* algoritma */
	createStack(&A);
	createStack(&B);
	createStack(&C);

	//printStack(A);
	//printf("isEmptyStack? %d\n", isEmptyStack(A));
	printf("Size sebelum %d\n", top(A));
	push(&A,'C');
	//printf("isFullStack?  %d\n", isFullStack(A));
	push(&A,'D');
	push(&A,'E');
	printf("Size SESUDAH %d\n", top(A));
	pop(&A,&X);
	printf("\nMengeluarkan %c\n",X);
	printf("Size sesudah pop %d\n", top(A));
	printStack(A);
	printf("\n");
	viewStack(A);
	push(&B, 'A');
	push(&B, 'N');
	push(&B, 'N');
	push(&B, 'A');

	char ANNA[30] = "ANNA";
	
	boolean apakahPalindrom = isPalindrom(ANNA);
	if(apakahPalindrom) {
		printf("Yes");
	} else {
		printf("Tidak");
	}
	printf("\n");
	pushN(&C, 4);
	printStack(C);

	return 0;
}

