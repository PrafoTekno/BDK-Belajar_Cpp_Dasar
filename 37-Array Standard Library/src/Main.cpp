
#include <iostream>
#include <array>
using namespace std;

int main () {

    cout << "Array dengan Standard Library\n" << endl;

    array <int, 10> data; // Syntax std::array <type data, banyak data> nama array

    for (int s = 0; s < 10; s++) {
        cout << "Data [" << s << "] = ";
        cout << s + 5 << "  |  Address : " << &data[s] << endl;
    }

    cout << "\nUkuran array : " << data.size () << " data" << endl;
    // Batas atas
    cout << "Address awal : " << data.begin () << endl;
    // Batas bawah
    cout << "Address akhir : " << data.end () << endl;

    cout << endl;

    return 0;

}