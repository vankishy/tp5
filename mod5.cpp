//
// Created by reinhardsitumeang on 14/10/2023.
//
#include "mod5.h"
using namespace std;

adr allocate_1302220001(infotype data) {
    adr P;

    P = new elmList;
    info(P) = data;
    next(P) = NULL;

    return P;
}

void createList_1302220001(List &L) {
    first(L) = NULL;
}

void insertLast_1302220001(List &L, adr P) {
    adr ptLast;

    ptLast = first(L);
    if (first(L) != NULL) {
        while (next(ptLast) != NULL) {
            ptLast = next(ptLast);
        }
        next(ptLast) = P;
    } else {
        first(L) = P;
    }
}

void showData_1302220001(List L) {
    adr P = first(L);
    while (P != NULL) {
        cout << info(P) << ", ";
        P = next(P);
    }
    cout << endl << endl;
}

adr findMax_1302220001(List L) {
    adr P, ptMax;
    infotype valMax;

    P = first(L);
    ptMax = first(L);
    valMax = info(first(L));
    while (P != NULL) {
        if (info(P) > valMax) {
            valMax = info(P);
            ptMax = P;
        }
        P = next(P);
    }
    return ptMax;
}

void showMiddle_1302220001(List L) {
    adr P;
    int nData, med, i;

    P = first(L);
    while (P != NULL) {
        nData++;
        P = next(P);
    }
    med = (nData / 2) + 1;
    P = first(L);
    for (i = 1; i < med; i++) {
        P = next(P);
    }
    cout << info(P) << endl << endl;
}

int selectMenu_1302220001() {
    cout << "========== MENU ==========" << endl;
    cout << "1. Menambah data baru" << endl;
    cout << "2. Menampilkan semua data" << endl;
    cout << "3. Cari Nilai Terbesar" << endl;
    cout << "4. Tampilkan data tengah" << endl;
    cout << "0. Quit" << endl;
    cout << "Masukkan Menu : ";
    int input = 0;
    cin >> input;

    return input;
}