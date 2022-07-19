
#include <iostream>
using namespace std;

int main () {

    cout << "Casting Operator\n" << endl;

    int a = 3;
    float b = 5.64f;
    char c = 's';

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << " = " << int(c) << endl << endl;

    cout << "a + b = " << float(a) + b << endl;
    cout << "a + b = " << a + int(b) << endl;
    cout << "a + c = " << float(c) + a << endl;
    cout << "c + b = " << char(b + c) << endl;

    cout << endl; 

    return 0;

}
