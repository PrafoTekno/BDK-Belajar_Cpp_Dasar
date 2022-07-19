
#include <iostream>
#include <string>

using namespace std;

int main () {

    cout << "Komperasi pada String\n" << endl;

    string kata_rahasia = "Semangat";
    string input;

    while (true) {

        cout << "Masukan sebuah kata : ";
        cin >> input;
        
        if (input == kata_rahasia) { //Hanya bisa membandingkan 1 kata saja
            cout << "\nSelamat kamu berhasil menemukan kata rahasia!" << endl;
            break;
        }

    }

    cout << "Keluar dari looping \n" << endl;

    return 0;

}