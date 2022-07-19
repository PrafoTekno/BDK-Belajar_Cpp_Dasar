
#include <iostream>
using namespace std;

int Fibonacci (int n) {
    if (n <= 1) {
        return n;
    } else {
        return Fibonacci (n-1) + Fibonacci (n-2);
        // Kelemahan rekursif : terlalu banyak percabangan akan menjadi stack overflow
    }
}

int main () {

    cout << "Fibonacci dengan Fungsi Rekursif\n" << endl;

    int angka;

    cout << "Masukan angka untuk deret fibonacci : ";
    cin >> angka;
    cout << "Nilai nya adalah " << Fibonacci (angka) << endl << endl;

    return 0;

}