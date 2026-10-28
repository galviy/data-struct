/* File : list1.c */
/* Deskripsi : realisasi body ADT list berkait representasi fisik pointer */
/* NIM & Nama : */
/* Tanggal : November 2026 */
#include <stdio.h>
#include <stdlib.h>
#include "list1.h"

/********* manajemen memori ********/
/* Function Alokasi(E:infotype)->address
{mengembalikan alamat elemen E bila berhasil, Nil bila gagal} */
address Alokasi(infotype E) {
	//kamus lokal
	address P;
	//algoritma
	P = (address) malloc(sizeof(Elm));
	if (P != NIL) { //ruang memori tersedia
		info(P) = E;
		next(P) = NIL;
	} else {
		printf("Tidak berhasil alokasi data\n");
	}
	return P;
}

/* procedure Dealokasi (input/output P:address) */ 
/* {I.S. P terdefinisi 
    F.S. P dikembalikan ke NIL  
	Proses: Melakukan pengosongan address P} */
void Dealokasi (address P) {
	//kamus lokal
	
	//algoritma
	if ( P != NIL ) {
		next(P) = NIL;
	}
	P = NIL;
}
/*********** OPERATORS ***********/

/*procedure PrintList(input L:List1)
{I.S. L terdefinisi; F.S. :-}
{ menampilkan info semua elemen list L} */
void PrintList(List1 L) {
	//kamus lokal 
	address P;
	//algoritma
	P = First(L);
	if (P != NIL) {
		printf("\nElemen = ");
		do {
			printf("\t%c", info(P));
			P = next(P);
		} while( P != NIL );
	}
}

void CreateList (List1 *L){
	//kamus lokal
	address P;
	//algoritma

	(*L).First = NIL;

}

boolean IsEmptyList (List1 L){
	return L.First == NIL;
}

int NbElm(List1 L){
	//Kamus lokal
	address P;
	int count;
	//algoritma

	count = 0;
	if(IsEmptyList(L)) {
		return 0; 
	} else {
		P = First(L);
		while((*P).next != NIL){
			P = (*P).next;
			count++;
		}
		count++;
	}
	return count;

}
void InsertVLast(List1 *L, infotype V ){
  address p;
  
  p = Alokasi(V); 

  // Algoritma
    p = Alokasi(V); 

  if (p != NIL) { 
    if (IsEmptyList(*L)){
      (*L).First = p;
    } else {
      address temp;
      temp = (*L).First;
      
      while ((*temp).next != NIL){
        temp = (*temp).next;
      }
      
      (*temp).next = p;
    }
  }
}


