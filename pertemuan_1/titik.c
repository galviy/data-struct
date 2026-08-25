/************************************/
/* Program   : titik.c */
/* Deskripsi : realisasi body modul Titik */
/* NIM/Nama  : */
/* Tanggal   : */
/***********************************/
#include <stdio.h>
#include "titik.h"



void makeTitik(Titik *T, int x, int y){
    T->absis = x;
    T->ordinat = y;
}


int getAbsis(Titik T){
    return T.absis;
}