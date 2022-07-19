
#include <iostream>
using namespace std;

int main () {

    cout << " Increament dan Decreament " << endl << endl;

    int a = 2, b = 9;

    // Increament 

    // PostIncreament
    cout << "Nilai a = " << a << endl;
    cout << a++ << endl;
    cout << a << endl;

    cout << endl;

    // PreIncreament 
    cout << "Nilai b = " << b << endl;
    cout << ++b << endl;
    cout << b << endl;

    cout << endl;

    // Decreament 

    // PostDecreament
    cout << "Nilai a = " << a << endl;
    cout << a-- << endl;
    cout << a << endl;

    cout << endl;

    // PreDecreament 
    cout << "Nilai b = " << b << endl;
    cout << --b << endl;
    cout << b << endl;

    cout << endl;


    return 0;
}