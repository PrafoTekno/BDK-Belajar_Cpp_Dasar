
#include <iostream>
using namespace std;

int main () {

    int angka;

    cout << "If Statment\n" << endl;

    cout << "Masukkan sebuah angka : ";
    cin >> angka;
    cout << "Angka yang dimasukan adalah " << angka << endl;

    if (angka == 13) {
        cout << "Selamat kamu menebak angka yang benar" << endl;
    } else {
        cout << "Maaf angka yang kamu tebak salah " << endl;
    }

    return 0;

}