
#include <iostream>
using namespace std;

int main () {

    cout << "Refrence\n" << endl;

    int s = 6;
    int * point_s = &s;
    int r = 9;

    cout << "Nilai s = " << s << endl;
    cout << "Address s = " << point_s << endl << endl;

    cout << "Nilai r = " << r << endl;
    cout << "Address r = " << &r << endl << endl;

    cout << "------------------------------ Menyatukan s dengan r " << endl;

    int &r1 = s;

    cout << "Nilai s = " << s << endl;
    cout << "Address s = " << point_s << endl << endl;

    cout << "Nilai r = " << r1 << endl;
    cout << "Address r = " << &r1 << endl << endl;

    s = 13;

    cout << "Nilai s = " << s << endl;
    cout << "Address s = " << point_s << endl << endl;

    cout << "Nilai r = " << r1 << endl;
    cout << "Address r = " << &r1 << endl << endl;

    r1 = 20;

    cout << "Nilai s = " << s << endl;
    cout << "Address s = " << point_s << endl << endl;

    cout << "Nilai r = " << r1 << endl;
    cout << "Address r = " << &r1 << endl << endl;

    return 0;

}