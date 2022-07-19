
#include <iostream>
using namespace std;

int main () {

    cout << "For Loop\n" << endl;

    cout << "Mari berhitung" << endl;

    int batas;
    cout << "Masukan batas berhitung : ";
    cin >> batas;

    cout << endl;

    for (int i = 1; i <= batas; i++) {
        cout << "I ke " << i << endl;
    }

    return 0;

}
