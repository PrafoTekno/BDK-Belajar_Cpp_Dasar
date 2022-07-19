
#include <iostream>
using namespace std;

int main () {

    float a,b;
    char simbol;
    float hasil;

    cout << "Kalkulator Sederhana (2 Angka, 1 Operasi)\n" << endl;

    cout << "Masukan angka pertama : ";
    cin >> a;
    cout << "Masukan angka kedua : ";
    cin >> b;
    cout << "Masukan operasi hitungnya (+,-,*,/) : ";
    cin >> simbol;

    cout << endl;

    if (simbol == '+') {
        hasil = a + b;
    }
    else if (simbol == '-') {
        hasil = a - b;
    }
    else if (simbol == '*') {
        hasil = a * b;
    }
    else if (simbol == '/') {
        hasil = a / b; 
    }
    else {
        cout << "Error code : 987 !!!" << endl;
    }

    cout << "Hasil operasinya adalah " << hasil << endl;  

    cout << endl; 

    return 0;
}
