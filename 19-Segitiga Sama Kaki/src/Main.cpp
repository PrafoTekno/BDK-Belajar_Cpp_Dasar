
#include <iostream>
using namespace std;

int main () {

    cout << "Membuat Segitiga Sama Kaki \n" << endl;

    int tinggi;

    cout << "Masukan tinggi segitiga : ";
    cin >> tinggi;

    cout << "\n Pola Ke 1" << endl;

     for (int i = 1; i <= tinggi; i++) {
        
        for (int j = tinggi; j >= i; j--) {
            cout << " ";
        }

        for (int k = 1; k <= (2 * i - 1); k++) {
            cout << "*";
        }

        cout << endl;
    
    }

    cout << "\n Pola ke 2" << endl;

    for (int i = 1; i <= tinggi; i++) {

        for (int j = 0; j < i; j++) {
            cout << " ";
        }

        for (int k = tinggi; k >= (2 * i - tinggi); k--) {
            cout << "*";
        }

        cout << endl;
    }

    cout << endl;

    cout << " Ketupat " << endl;

    for (int i = 1; i <= tinggi; i++) {
        
        for (int j = tinggi; j >= i; j--) {
            cout << " ";
        }

        for (int k = 1; k <= (2 * i - 1); k++) {
            cout << "*";
        }

        cout << endl;
    
    }

    for (int i = 2; i <= tinggi; i++) {

        for (int j = 1; j <= i; j++) {
            cout << " ";
        }

        for (int k = tinggi; k >= (2 * i - tinggi); k--) {
            cout << "*";
        }

        cout << endl;
    }

    return 0;

}