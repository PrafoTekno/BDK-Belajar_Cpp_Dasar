
#include <iostream>
using namespace std;

void angka_pointer (int * value) {

    cout << "Nilai x = " << *value << endl;
    cout << "Address x = " << value << endl << endl;

}

void kuadrat (int * value) {    // Vriable value 
                                //Hanya dipakai 1 kali
    *value = (*value) * (*value); 
    cout << *value << endl;
    cout << "Address dari " << *value << " = " << value << endl; 

    // Pengaplikasian pointer menggunakan fungsi kuadrat
}

 /*
    Pointer 
    2 Varible 1 memory
    Jadi lebih efisien
 */

int main () {

    cout << "Fungsi Pointer\n" << endl;

    int a = 5;
    int b = 5;

    cout << "Nilai a = " << a << endl;
    cout << "Address a = " << &a << endl << endl;

    cout << "Nilai b = " << b << endl;
    cout << "Address b = " << &b << endl << endl; 

    angka_pointer (&a); // yang diambil adalah alamatnya

    cout << a << " kudadrat = ";
    kuadrat (&a);

    cout << endl;

    return 0;

}