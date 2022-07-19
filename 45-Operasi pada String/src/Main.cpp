
#include <iostream>
#include <string>

using namespace std;

int main () {

    cout << "Operasi Pada String \n" << endl;

    string nama = "Udin";

    // Menampilkan string
    cout << nama << endl;

    // Megambil index string
    cout << nama[3] << endl;

    // Mengganti index string
    nama[0] = 'O';
    cout << nama << endl;

    // Menambahkan atau concatenate string
    string update_nama = nama + "g";
    cout << update_nama << endl;
    update_nama = nama.append (" hebat");
    cout << update_nama << endl;

    cout << endl; 

    return 0;

}
