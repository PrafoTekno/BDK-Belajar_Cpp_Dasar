
#include <iostream>
using namespace std;

//Tujuannya adalah agar banyak data 1 memory (lebih efektif)

int main () {

    cout << "Pointer\n" << endl;

    int x = 5;
    int * point_x = &x;

    cout << "Nilai x = " << x << endl;
    cout << "Alamat x = " << point_x << endl;

    // Mengambil nilai dari address

    x = 9;

    cout << "\n---------------------------------------Merubah nilai x " << endl;
    cout << "Nilai dengan address " << point_x << " menjadi " << *point_x << endl;

    cout << endl;

    return 0;

}