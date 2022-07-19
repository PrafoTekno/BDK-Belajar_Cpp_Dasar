
#include <iostream>
using namespace std;

int main () {

    cout << "Membuat Segitiga Siku-Siku \n" << endl;

    int tinggi;

    cout << "Masukkan tinggi segitiga : ";
    cin >> tinggi;

    cout << "\n Ini dia Segitiga Siku-Siku mu \n" << endl;

    cout << "Pola 1" << endl;

    for (int i = 0; i < tinggi; i++) {
        
        for (int j = 0; j <= i; j++) {
        
            cout << "* ";
        }

        cout << endl;
    
    }

    cout << "\nPola 2" << endl;

    for (int i = tinggi; i >= 0; i--) {
        
        for (int j = 0; j < i; j++) {
        
            cout << "* ";
        }

        cout << endl;
    
    }
    
    cout << "\nPola 3" << endl;

    for (int i = 1; i <= tinggi; i++) {
        
        for (int j = 1; j < i; j++) {
            cout << " ";
        }

        for (int k = tinggi; k >= i; k--) {
            cout << "*";
        }

        cout << endl;
    
    }

    cout << "\nPola Ke 4" << endl;

    for (int i = 1; i <= tinggi; i++) {
        
        for (int j = tinggi; j >= i; j--) {
            cout << " ";
        }

        for (int k = 1; k <= i; k++) {
            cout << "*";
        }

        cout << endl;
    
    }

    cout << endl;

    return 0;

}