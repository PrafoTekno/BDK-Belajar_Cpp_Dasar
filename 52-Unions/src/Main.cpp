
#include <iostream>

using namespace std;

union Data {

    int int_value;
    char char_value [4]; // ukuran int = 4 byte

};

int main () {

    cout << "Unions\n" << endl;

    // Union = 1 data bisa banyak bentuk/tipe

    Data angka;

    angka.int_value = 920393019;
    cout << "Int value : " << angka.int_value << endl;
    cout << "Char value : " << angka.char_value << endl << endl;

    angka.char_value[0] = 's';
    angka.char_value[1] = 'e';
    angka.char_value[2] = 'r';
    angka.char_value[3] = 'u';

    cout << "Int value : " << angka.int_value << endl;
    cout << "Char value : " << angka.char_value << endl << endl;

    return 0;

}