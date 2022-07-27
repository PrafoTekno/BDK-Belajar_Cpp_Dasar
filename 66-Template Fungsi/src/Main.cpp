
#include <iostream>
#include <string>

using namespace std;

//Tamplate Fungsi = agar suatu fungsi dapat diakses dengan berbagai tipe data

template <typename S>
void tulis (S data) {
    cout << data << endl;
}

template <typename S>
int jumlah (S a, S b) {
    return a + b;
}

template <typename S, typename R>
S min (S a, R b) {
    return (a < b) ? a : b;
}

int main () {

    cout << "Tamplate Fungsi\n" << endl;

    tulis (3);
    tulis ('c');
    tulis (6.89);
    tulis ("Halo");

    cout << jumlah <double>(4.7,5) << endl;
    cout << min <int, double>(9.78,10.57) << endl;

    cout << endl;

    return 0;

}