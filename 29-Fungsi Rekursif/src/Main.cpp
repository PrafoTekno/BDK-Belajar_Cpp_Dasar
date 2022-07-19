
#include <iostream>
using namespace std;

double Pangkat_Iterasi (double angka, double pangkat) {
    
    double hasil = angka;

    for (int s = 1; s < pangkat; s++) {
        hasil = hasil * angka;
    }

    return hasil;

}

double Pangkat_Rekursif (double angka, double pangkat) {

    if (pangkat == 1) {
        return angka;
    } else {
        return angka * Pangkat_Rekursif (angka, pangkat - 1);
    }
}

int main () {

    cout << "Fungsi Rekursif\n" << endl;

    double a, b;

    cout << "Masukan bilangan pokoknya : ";
    cin >> a;
    cout << "Masukan pangkatnya : ";
    cin >> b;
    cout << "Hasil iterasinya adalah " << Pangkat_Iterasi (a, b) << endl;
    cout << "Hasil rekursifnya adalah " << Pangkat_Rekursif (a, b) << endl;  

    cout << endl;

    return 0; 

}