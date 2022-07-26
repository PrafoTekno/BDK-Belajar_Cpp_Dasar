
#include <iostream>
#include "Lib.h"
#include "Bar.h"
#include "Gabungan.h"

//ifdef = buat ngecek apakah sesuatu sudah di define atau belum
#ifdef HURUF
    #define STATUS "HURUF lama"
#else
    #define STATUS "HURUF tidak ada"
#endif

//ifndef = jika define tidak ada
#ifndef HURUF
    #define HURUF "HURUF baru"
#endif

#ifndef ANGKA
    #define ANGKA 5
#endif

using namespace std;

int main () {

    cout << "ifdef, indef, pragma\n" << endl;

    cout << STATUS << endl;
    cout << ANGKA << endl;
    cout << HURUF << endl;

    Agent orang;
    orang.code = 3456;
    cout << orang.code << endl;

    //cout << LIB << endl;
    //cout << KALIMAT << endl;

    cout << endl;

    return 0;

}