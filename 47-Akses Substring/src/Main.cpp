
#include <iostream>
#include <string>

using namespace std;

int main () {

    cout << "Substring\n" << endl;

    // Substring = mengambil karakter dari sebuah string

    string kalimat1 = "Halo apa kabar kalian semuanya?";
    string kalimat2 = "Jangan pernah menyerah untuk terus melangkah!";

    // string name.substr (index, panjang)

    cout << "Kalimat 1 : " << kalimat1 << endl;
    cout << "Kalimat 2 : " << kalimat2 << endl;

    cout << endl;

    cout << "Ambil kata : " << kalimat1.substr (9,5) << endl;
    cout << "Ambil kata : " << kalimat2.substr (0,6) << endl;

    cout << endl;

    // Find = mencari index pada karakter tersebut
    // string name.find (yang dicari)

    cout << "Mencari index dari 'li' : " << kalimat1.find ('li') << endl;
    cout << "Mencari index dari 'er' : " << kalimat2.find ('er') << endl;

    cout << endl;

    int er = kalimat2.find ('er');
    int er1 = kalimat2.find ('er', 1 + er);

    cout << "Mencari index dari 'er' yang lain : " << kalimat2.find ('er', 1 + er1) << endl << endl;

    cout << "Mencari index dari 'ah' dari belakang : " << kalimat2.rfind ('ah') << endl;

    cout << endl;

    return 0;

}