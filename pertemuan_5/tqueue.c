/* Program   : tqueue.c */
/* Deskripsi : file BODY modul queue model I */
/* NIM/Nama  : */
/* Tanggal   : */
/***********************************/

#include <stdio.h>
#include "tqueue.h"
#include "boolean.h"

void createQueue(tqueue *Q) {
	/* kamus lokal */
	int i;
	/* algoritma */
	for (i = 1; i <= 5; i++) {
		(*Q).wadah[i] = '-';
	}
	(*Q).head = 0;
	(*Q).tail = 0;
}

boolean isEmptyQueue(tqueue Q) {
	/* algoritma */
	if (Q.head == 0 && Q.tail == 0) {
		return true;
	} else {
		return false;
	}
}

