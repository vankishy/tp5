//
// Created by reinhardsitumeang on 14/10/2023.
//

#ifndef UNTITLED5_MOD5_H
#define UNTITLED5_MOD5_H
#include <iostream>
#define first(L) (L).first
#define next(P) P->next
#define info(P) P->info
using namespace std;

typedef int infotype;
typedef struct elmList *adr;

struct elmList {
    infotype info;
    adr next;
};

struct List {
    adr first;
};

adr allocate_1302220001(infotype data);
void createList_1302220001(List &L);
void insertLast_1302220001(List &L, adr Pt);
void showData_1302220001(List L);
adr findMax_1302220001(List L);
void showMiddle_1302220001(List L);
int selectMenu_1302220001();

#endif //UNTITLED5_MOD5_H
