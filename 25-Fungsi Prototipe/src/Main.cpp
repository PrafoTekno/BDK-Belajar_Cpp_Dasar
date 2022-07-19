
#include <iostream>
using namespace std;

// Fungsi Prototipe
float cm (float km);

int main () {

    cout << "Fungsi Prototipe\n" << endl;

    float x;

    cout << "Masukan nilai dalam km : ";
    cin >> x;
    cout << x << " km = " << cm (x) << " cm \n" << endl;

    return 0;

}

float cm (float km) {
    return km * 100000;
}
