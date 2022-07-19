
#include <iostream>
#include <array>
using namespace std;

int main () {

    cout << "Looping Array\n" << endl;

    // for (deklarasi variable : array)

    array <int, 13> nilaiArray;

    for (int s = 0; s < nilaiArray.size (); s++) {
        nilaiArray[s] = s * 2;
    }

    for (int nilai : nilaiArray) {
        cout << "Nilai : " << nilai << "  |  Address : " << &nilai << endl;
        // Memiliki address yang sama, karena yang diambil adalah
        // Address dari array (bukan address per variablenya)
    }

    cout << endl;

    for (int &nilai : nilaiArray) {
        cout << "Nilai : " << nilai << "  |  Address : " << &nilai << endl;
        // Saat memakai refrence (&) nilai address per variablenya berbeda
        // Karena yang di ambil adalah address per variable yang sebenarnya
    }

    cout << "\n###################### Merubah Nilai #############################\n" << endl;

    for (int s = 0; s < nilaiArray.size (); s++) {
        nilaiArray[s] = s + 8;
    }

    for (int nilai : nilaiArray) {
        cout << "Nilai : " << nilai << "  |  Address : " << &nilai << endl;
        // Memiliki address yang sama, karena yang diambil adalah
        // Address dari array (bukan address per variablenya)
    }

    cout << endl;

    return 0;

}