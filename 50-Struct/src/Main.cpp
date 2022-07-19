
#include <iostream>
#include <string>

using namespace std;

struct mobil {

    int harga;
    string merek;
    string warna;
    float versi;

};

int main () {

    cout << "Struct\n" << endl;

    mobil mobil_1;
    mobil mobil_2;

    mobil_1.harga = 500000000;
    mobil_1.merek = "Audi";
    mobil_1.warna = "Merah";
    mobil_1.versi = 1.4;

    cout << "Mobil 1\n" << endl;

    cout << "Harga mobil : " << mobil_1.harga << endl;
    cout << "Merek mobil : " << mobil_1.merek << endl;
    cout << "Warna mobil : " << mobil_1.warna << endl;
    cout << "Versi mobil : " << mobil_1.versi << endl << endl;

    mobil_2.harga = 400000000;
    mobil_2.merek = "Alphard";
    mobil_2.warna = "Abu-Abu";
    mobil_2.versi = 2.1;

    cout << "Mobil 2\n" << endl;

    cout << "Harga mobil : " << mobil_2.harga << endl;
    cout << "Merek mobil : " << mobil_2.merek << endl;
    cout << "Warna mobil : " << mobil_2.warna << endl;
    cout << "Versi mobil : " << mobil_2.versi << endl;


    cout << endl;

    return 0;

}