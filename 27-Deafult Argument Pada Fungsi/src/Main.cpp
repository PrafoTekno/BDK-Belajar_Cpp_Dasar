
#include <iostream>
using namespace std;

double operasi (double x = 3, double y = 1, double z = 2);
// Kalau tidak ada nilai input yang dimasukkan maka, x = 3, y = 1, dan z = 2

int main () {

    cout << "Deafult Argument Pada Fungsi \n" << endl;

    cout << "Nilai Operasi = " << operasi (2,3,4) << endl;
    cout << "Nilai Operasi = " << operasi (2,3) << endl;
    cout << "Nilai Operasi = " << operasi (2) << endl;
    cout << "Nilai Operasi = " << operasi () << endl;

    cout << endl;

    return 0;

}

double operasi (double x, double y, double z) {
    return x + y + z;
}

