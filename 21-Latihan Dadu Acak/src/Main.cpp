
#include <iostream>
#include <cstdlib> //Memuat fungsi random
using namespace std;

int main () {

    cout << "Membuat dadu acak\n" << endl;

    char perintah;

    while (true) {

        cout << "Ketik 'y/n' untuk lanjut atau tidak : ";
        cin >> perintah;

        if (perintah == 'y') {
            cout << 1 + (rand () % 6) << endl;
        }
        else if (perintah == 'n') {
            break;
        }
        else {
            cout << "Error, input tidak sesuai" << endl;
        }

    }

    cout << "\n Sampai Jumpa" << endl;

    return 0;
}