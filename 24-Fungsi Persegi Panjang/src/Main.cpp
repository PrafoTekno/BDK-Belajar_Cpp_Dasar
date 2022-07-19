
#include <iostream>
using namespace std;

int Luas (int p, int l) {
    return p * l;
}

int Keliling (int p, int l) {
    return 2 * (p + l);
}

void Persegi_Panjang (int p, int l) {
    cout << "\nIni dia persegi panjang nya" << endl;
    for (int y = 1; y <= l; y++) {
        for (int x = 1; x < p; x++) {
            cout << " * ";
        }
        cout << " *" << endl;
    }
}

int main () {

    cout << "Fungsi Persegi Panjang \n" << endl;

    int panjang, lebar;

    cout << "Masukan panjang : ";
    cin >> panjang;
    cout << "Masukan lebar : ";
    cin >> lebar;

    Persegi_Panjang (panjang, lebar);
    cout << "Keliling nya sebesar " << Keliling (panjang, lebar) << " satuan\n";
    cout << "Luas nya sebesar " << Luas (panjang, lebar) << " satuan\n" << endl;

    return 0;

}