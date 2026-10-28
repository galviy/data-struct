
/* Program   : tstack.c */
/* Deskripsi : file BODY modul stack karakter */
/* NIM/Nama  : */
/* Tanggal   : */
/***********************************/

#include <stdio.h>
#include <string.h>
#include "tstack.h"
#include "boolean.h"
/* include tstack+boolean */

void createStack(Tstack *T) {
	/* kamus lokal */
	int i;
	/* algoritma */
	for (i = 1; i <= 10; i++) {
		(*T).wadah[i] = '#';
	}
	(*T).top = 0;   /* top=0 artinya stack kosong, belum ada elemen terisi */
}

boolean isEmptyStack(Tstack T) {
	/* algoritma */
	if (T.top == 0) {
		return true;
	} else {
		return false;
	}
}

boolean isFullStack(Tstack T) {
	/* algoritma */
	if (T.top == 10) {
		return true;
	} else {
		return false;
	}
}

void push (Tstack *T, char E){
    /*Kamus*/

    /*Algoritma*/
    if (!isFullStack(*T)){
        (*T).top ++;
        (*T).wadah[top(*T)] = E;
    } else {
        printf("Stack sudah penuh");
    }
}

/* procedure pop ( input/output T:Tstack, output X: character )
	{I.S.: T terdefinisi}
	{F.S.: X= infotop stack lama, atau '#' }
	{Proses: mengambil elemen top, bila belum kosong }*/
void pop (Tstack *T, char *X){
    if (isEmptyStack(*T)){
        printf("Stack Kosong");
    }
    else{
        *X=infotop(*T);
        (*T).wadah[top(*T)]='#';
        (*T).top--;
    }
}

void printStack (Tstack T){
    //kamus lokal

    int i;
    //algoritma
    i = 10;
    while (i > 0){
        printf("%c; ", T.wadah[i]);
        i--;
    }
}

void viewStack (Tstack T){
    //kamus lokal
    int i;
    //algoritma
    i  = top(T);
    while (i > 0){
        printf("%c; ", T.wadah[i]);
        i--;
    }
}

bool isPalindrom(char kata[30]) {
    // KAMUS LOKAL
    Tstack A;
    createStack(&A);

    int i;
    int panjang = 0;
    char X;
    // ALGORITMA
    // Hitung panjang kata
    
    while (kata[panjang] != '\0') {
        panjang = panjang + 1;
    }

    for (i = 0; i < panjang / 2; i++) {
        push(&A, kata[i]);
    }

    if (panjang % 2 == 1) {
        i = (panjang / 2) + 1;
    } else {
        i = panjang / 2;
    }

    while (kata[i] != '\0') {
        pop(&A, &X);
        if (X != kata[i]) {
            return false;
        }
        i++;
    }
    return true;
}

void pushN (Tstack *T, int N){
    //KAMUS
    int i = 1;
    char E;

    //algoritma
    if(isFullStack(*T)){
        printf("stack penuh");
    }
    else{
        for (i = 1; i <= N; i++){
            scanf(" %c", &E);
            push(T, E);
        }
    }
}