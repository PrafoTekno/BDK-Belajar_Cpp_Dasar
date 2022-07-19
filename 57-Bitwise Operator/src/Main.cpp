
#include <iostream>
#include <string>
#include <bitset>

using namespace std;

void dataBinary (unsigned short val) {
    cout << bitset<8> (val) << " = " << val << endl;
}

int main () {

    cout << "Bitwise Operator\n" << endl;

    unsigned short a = 5;
    unsigned short b = 9;
    unsigned short hasil, hasil1;

    cout << "\n----------- AND (&) -------------\n" << endl;

    hasil = a & b;
    dataBinary (a);
    dataBinary (b);
    dataBinary (hasil);

    cout << "\n----------- OR (|) -------------\n" << endl;

    hasil = a | b;
    dataBinary (a);
    dataBinary (b);
    dataBinary (hasil);

    cout << "\n----------- XOR (^) -------------\n" << endl;

    hasil = a ^ b;
    dataBinary (a);
    dataBinary (b);
    dataBinary (hasil);

    cout << "\n----------- SHIFT LEFT (<<) -------------\n" << endl;

    hasil = a << 1;
    hasil1 = b << 1; 
    dataBinary (a);
    dataBinary (hasil);
    dataBinary (b);
    dataBinary (hasil1);

    cout << "\n----------- SHIFT RIGHT (>>) -------------\n" << endl;

    hasil = a >> 1;
    hasil1 = b >> 1;
    dataBinary (a);
    dataBinary (hasil);
    dataBinary (b);
    dataBinary (hasil1);

    cout << "\n----------- NOT (~) -------------\n" << endl;

    dataBinary (a);
    dataBinary (b);

    cout << endl;

    return 0;

}