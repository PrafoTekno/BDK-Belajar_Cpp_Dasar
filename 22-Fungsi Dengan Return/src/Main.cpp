
#include <iostream>
using namespace std;

float kuadrat (float n) {

    float hasil;
    hasil = n * n;
    return hasil;

}

int main () {

    cout << "Fungsi dengan Return \n" << endl;

    float x = 0;

    cout << "Masukan sebuah bilangan : ";
    cin >> x;

    cout << x << " kuadrat = " << kuadrat (x) << endl;

    cout << endl;

    return 0;
}