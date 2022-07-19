
#include <iostream>
#include <array>
using namespace std;

int main () {

    cout << "Daftar Nilai Siswa\n" << endl;

    array <int, 10> nilai;

    // Memasukan input nilai 

    for (int s = 0; s <= nilai.size (); s++) {
        
        cout << "Masukan banyak siswa dengan nilai ";

        if (s == 10) {
            cout << "100 : ";
        }
        else {
            cout << (s*10) << "-" << (s*10) + 9 << " : ";
        }

        cin >> nilai[s];

    }

    cout << "\n-------------------------------------------------------\n" << endl;

    // Menampilkan Data 

    cout << "Ini dia data nya \n" << endl;

    for (int s = 0; s <= nilai.size (); s++) {
        cout << nilai[s] << endl;    
    }

    cout << "\n------------------------------------------------------\n" << endl;

    // Menampilkan Grafik Data

    cout << "Ini dia grafiknya\n " << endl;

    for (int s = 0; s <= nilai.size (); s++) {

        cout << "Nilai ";

        if (s == 10) {
            cout << "100 : ";
        }
        else {
            cout << (s*10) << "-" << (s*10)+9 << " : ";
        }

        for (int r = 0; r < nilai[s]; r++) {
            cout << "*";   
        }

        cout << endl;

    }

    cout << endl;

    return 0;

}