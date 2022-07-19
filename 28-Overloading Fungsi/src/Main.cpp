
#include <iostream>
using namespace std;

int LuasKotak (int p, int l) {
    return p * l;
}

int LuasKotak (int p) {
    return p * p;
}

double LuasKotak (double p, double l) {
    return p * l;
}

double LuasKotak (double p) {
    return p * p;
}

int main () {

    // Overloading fungsi, adalah fungsi yang dapat berjalan di 2 kondisi berbeda
    cout << "Overloading Pada Fungsi \n" << endl;

    cout << "Luas Kotak = " << LuasKotak (4,5) << " satuan" << endl;
    cout << "Luas Kotak = " << LuasKotak (2) << " satuan\n" << endl; 
    cout << "Luas Kotak = " << LuasKotak (3.5,5.9) << " satuan" << endl;
    cout << "Luas Kotak = " << LuasKotak (2.7) << " satuan\n" << endl; 

    return 0;

}