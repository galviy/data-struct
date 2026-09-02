#ifndef   tabel_c
#define   tabel_c
#include "tabel.h"
#include <ctype.h>
/* Deskripsi : */
/* NIM/Nama : */
/* Tanggal : */

/************************KONSTRUKTOR*************************/				 
/* procedure createTable( output T: Tabel)
	{I.S.: -}
	{F.S.: size=0, setiap elemen wadah dengan 1 karakter spasi, spasi dianggap karakter kosong}
	{Proses: menginisialisasi T} */

int getSize(Tabel T){
    return T.size;
}

void createTable(Tabel *T){
    // Kamus Lokal
    int i;

    //Algoritma
    T->size=0;
    for (i=1;i<getSize(*T);i++){
        T->wadah[i]=' ';
    }
}

int maxSize(Tabel T){
    return 10;
}

boolean isEmptyTable(Tabel T){
    return getSize(T) == 0;
}

boolean isFullTable(Tabel T){
    return getSize(T) == maxSize(T);
}

void addXTable(Tabel *T, char x) {
    if (!isFullTable(*T)) {
        T->size += 1;
        T->wadah[T->size] = x;
    } else {
        printf("Tabel sudah penuh\n");
    }
}

void viewTable(Tabel T) {
    // kamus lokal
    int size, i;
    // algoritma
    size = getSize(T);
    for (i = 1; i <= size; i++) {
     printf("%c ", T.wadah[i]);   
    }
}

void searchX(Tabel T, char x, int *pos) {
    // kamus lokal
    int i;
    boolean find;
    // algoritma
    i = 1;
    find = false;
    while (i <= getSize(T) && find == false) {
        if (T.wadah[i]==x) {
            *pos = i;
            find = true;
        } else {
            i = i + 1;
        }
    }
    if (find == false) {
        *pos = -999;
    }
}

int countX(Tabel T, char x){
    //KAMUS LOKAL
    int i;
    int j = 0;

    //ALGORITMA
    for(i=1; i<=T.size; i++){
        if(T.wadah[i] == x){
            j++;
        }
    }
    return j;
}

int countVocal(Tabel T) {
    //Kamus Lokal
    int i;
    int j = 0;

    //Algoritma
    for (i = 1; i <= T.size; i++) {
        if (tolower(T.wadah[i]) == 'A' || T.wadah[i] == 'I' || T.wadah[i] == 'U' || T.wadah[i] == 'E' || T.wadah[i] == 'O') {
            j++;
        }
    }
    return j;
}

void addUniqueXTable(Tabel *T, char x){
    //KAMUS
    int pos;

    //ALGORITMA
    searchX(*T, x, &pos);

    if ((pos == -999) && (isFullTable(*T) == false)) {
        addXTable(T, x);
        printf("\nberhasil menambah char %c", x);
    } else {
        printf("\ntabel sudah penuh atau elemen sudah ada");
    }
}

void delTable(Tabel *T, int idx){
    if(idx == getSize(*T)){
        T->wadah[idx] = ' ';
        T->size--;
    } else {
        T->size--;
        for (int i = idx; i <= getSize(*T); i++)
        {
            T->wadah[i] = T->wadah[i+1];
        }
        
    }
}

#endif