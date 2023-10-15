#include <iostream>
#include "mod5.h"
using namespace std;


int main() {
    List Lmain{};
    adr Pt;
    int inData, select, bData = 0, inSelect, i;

    createList_1302220001(Lmain);

    select = selectMenu_1302220001();
    while (select != 0) {
        switch(select) {
            case 1:
                cout << "Masukkan jumlah data yang ingin ditambahkan : ";
                cin >> inSelect;
                bData = inSelect;
                for (i = 0; i < bData; i++) {
                    cout << "Masukkan data baru : ";
                    cin >> inData;
                    Pt = allocate_1302220001(inData);
                    insertLast_1302220001(Lmain, Pt);
                }
                cout << "Data berhasil ditambahkan! Kembali ke halaman utama..." << endl;
                select = 5;
                break;
            case 2:
                cout << " ";
                showData_1302220001(Lmain);
                cout << "[5] Kembali ke menu utama" << endl;
                cin >> select;
                break;
            case 3:
                if (bData == 0) {
                    cout << "Data tidak ada! Silahkan coba kembali" << endl;
                    select = 5;
                } else {
                    cout << "Nilai terbesar adalah : ";
                    Pt = findMax_1302220001(Lmain);
                    cout << info(Pt) << endl << endl;
                    cout << "[5] Kembali ke menu utama" << endl;
                    cin >> select;
                }
                break;
            case 4:
                cout << endl;
                if (bData % 2 == 0) {
                    cout << "Banyak data anda bernilai genap! Silahkan coba kembali" << endl;
                    select = 5;
                } else if (bData % 2 != 0) {
                    cout << "Data ditengah list adalah : ";
                    showMiddle_1302220001(Lmain);
                    cout << "[5] Kembali ke menu utama" << endl;
                    cin >> select;
                }
                break;
            case 5:
                cout << endl;
                select = selectMenu_1302220001();
        }
    }
    cout << "ANDA TELAH KELUAR DARI PROGRAM" << endl;
    return 0;
}
