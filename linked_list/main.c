/* File : main.c */
/* Deskripsi : aplikasi driver ADT list berkait, representasi fisik pointer */
/* NIM & Nama : */
/* Tanggal : November 2026 */
#include <stdio.h>
#include <stdlib.h>
#include "list1.h"

int main(){ 

  List1 Senarai;


  CreateList(&Senarai);
  Senarai.First = NIL;

  InsertVLast(&Senarai,'A');
  PrintList(Senarai);


  /*
  address a;
  address b;
  address c;
  address d;
  List1 senarai;

  a = (address)malloc(sizeof(Elm));
  (*a).info = 'A';


  b = (address)malloc(sizeof(Elm));
   (*b).info = 'B';

  (*a).next = b;

  c = (address)malloc(sizeof(Elm));
  (*c).info = 'C';
  (*b).next = c;

  d = (address)malloc(sizeof(Elm));
  (*d).info = 'd';
  (*c).next = d;

  senarai.First = a;
  printf("Address :%p char: %c Next Address: %p",a,(*a).info,(*a).next);
  printf("\n");
  printf("Address :%p char: %c Next Address: %p",b,(*b).info,(*b).next);
  printf("\n");


  printf("Address :%p char: %c Next Address: %p",c,(*c).info,(*c).next);
  printf("\n");

  address temp;

  temp = senarai.First;

  while((*temp).next != NULL){
    printf("Info = %c dengan address %p\n", (*temp).info, temp);
    temp = (*temp).next;
  }
    printf("Info = %c dengan address %p\n", (*temp).info, temp);
    */







  return 0;
}














/*
 address a;
  address b;
  address c;

  a = (address)malloc(sizeof(Elm));
  (*a).info = 'W';

   b = (address)malloc(sizeof(Elm));
  (*b).info = 'O';
  (*a).next = b;

  c = (address)malloc(sizeof(Elm));
  (*c).info = 'W';
  (*b).next = c;

  //b = NULL;

  printf("Address :%p char: %c Next Address: %p",a,(*a).info,(*a).next);
  printf("\n");
  printf("Address :%p char: %c Next Address: %p",b,(*b).info,(*b).next);
  printf("\n");
  printf("Address :%p char: %c Next Address: %p",c,(*c).info,(*c).next);

 // printf("%c %c %c",(*a).info,(*b).info,(*c).info);

  printf("\n");

 address d;

 d = (address)malloc(sizeof(Elm));
 (*d).info = '1';
 (*c).next = d;

 List1 senarai;

 senarai.First = a;

 //cara print

 address temp;
 temp = a;

 while((*temp).next != NULL){
  printf("infotype -> %c\n", (*temp).info);
  temp = (*temp).next;
 }
 printf("Infotype -> %c", (*temp).info);



 

  
*/
 /*
 int angka = 2;
 int *ptr = &angka;
 *ptr = 3;


 int angka_lagi = 3;
 int *ptr2 = &angka_lagi;
 ptr2 = NULL;
 printf("Memory pointer 1 %p\nMemory pointer 2 %p", ptr,ptr2);
 */