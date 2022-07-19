
#include <iostream>
using namespace std;

void angka_refrence (int &n) {
    cout << "Nilai r = " << n << endl;
    cout << "Address r = " << &n << endl << endl;
}

void pangkat (int &nilai) {
    nilai = nilai * nilai;
    cout << nilai << endl;
    cout << "Addressnya adalah " << &nilai << endl;
}

// Prinsip kerja = prinsip pointer, hanya berbeda syntax

int main () {

    cout << "Fungsi dengan Refrence\n" << endl;

    int s = 13;

    cout << "Nilai s = " << s << endl;
    cout << "Address s = " << &s << endl << endl;

    angka_refrence (s);

    cout << s << " kuadrat = ";
    pangkat (s);

    // Kesimpulan : 3 variable 1 memory

    cout << endl;

    return 0;

}