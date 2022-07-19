
#include <iostream>
using namespace std;

int main () {

    cout << "Operator Logika\n" << endl;

    int a = 9, b = 4;
    bool hasil;

    cout << "---------------- And -----------------" << endl;
    hasil = (a < 2) && (b > 1);
    cout << a << " < 2 && " << b << " > 1 = " << hasil << endl; 
    hasil = (a < 12) && (b > 2);
    cout << a << " < 12 && " << b << " > 2 = " << hasil << endl; 
    hasil = (a < 12) and (b > 6);
    cout << a << " < 12 && " << b << " > 6 = " << hasil << endl; 
    hasil = (a < 2) and (b > 10);
    cout << a << " < 2 && " << b << " > 10 = " << hasil << endl; 

    cout << "---------------- Or -----------------" << endl;
    hasil = (a < 2) || (b > 1);
    cout << a << " < 2 || " << b << " > 1 = " << hasil << endl; 
    hasil = (a < 12) || (b > 2);
    cout << a << " < 12 || " << b << " > 2 = " << hasil << endl; 
    hasil = (a < 12) or (b > 6);
    cout << a << " < 12 || " << b << " > 6 = " << hasil << endl; 
    hasil = (a < 2) or (b > 10);
    cout << a << " < 2 || " << b << " > 10 = " << hasil << endl; 

    cout << "---------------- Not -----------------" << endl;
    hasil = a != 2;
    cout << a << " != 2 = " << hasil << endl; 

    return 0;
}
