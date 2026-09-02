/************************************/
/* Program   : mainTabel.c */
/* Deskripsi :  */
/* NIM/Nama  :
/* Tanggal   : */
/***********************************/

#include <stdio.h>
#include "tabel.h"

int main(){
    Tabel T1;
    

    createTable(&T1);
    boolean p1 = isFullTable(T1);
    boolean p2 = isEmptyTable(T1);
    printf("size tabelny %d",getSize(T1));
    if (p1 == true){
        printf("\nTabelnya kosong");
    } else {
        printf("\nTabelnya berisi");
    }
    if (p2 == true){
        printf("\nTabelnya penuh");
    } else{
        printf("\nTabelnya belum penuh");
    }
     printf("\n");


    addXTable(&T1, 'A');
    addXTable(&T1, 'B');
    addXTable(&T1, 'C');
    addXTable(&T1, 'D');
    viewTable(T1);
    printf("\n");

    int idx; 
    searchX(T1, 'Z', &idx);
    printf("%d", idx);
    printf("\n");

    int total;
    total = countX(T1, 'A');
    printf("\n total A %d", total);

    int count = countVocal(T1);
    printf("\n jumlah vocal nya ada %d", count);

    int pos;
    addUniqueXTable(&T1, 'B');
    addUniqueXTable(&T1, 'E');

    printf("\n");
    viewTable(T1);
    delTable(&T1, 1);
    printf("\n");
    viewTable(T1);

}