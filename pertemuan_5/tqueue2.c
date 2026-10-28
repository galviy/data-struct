/* Program   : tqueue2.c */
/* Deskripsi : file BODY modul queue model II */
/* NIM/Nama  : */
/* Tanggal   : */
/***********************************/

#include <stdio.h>
#include "tqueue2.h"
#include "boolean.h"

void createQueue2(tqueue2 *Q) {
	/* kamus lokal */
	int i;
	/* algoritma */
	for (i = 1; i <= 5; i++) {
		(*Q).wadah[i] = '#';
	}
	(*Q).head = 0;
	(*Q).tail = 0;
}

boolean isEmptyQueue2(tqueue2 Q) {
	/* algoritma */
	if (Q.head == 0 && Q.tail == 0) {
		return true;
	} else {
		return false;
	}
}
