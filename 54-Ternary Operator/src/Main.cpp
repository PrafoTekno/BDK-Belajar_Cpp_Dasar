
#include <iostream>
#include <string>

using namespace std;

int main () {

    cout << "Ternary Operator\n" << endl;

    // Ternary Operator kondisi ? hasil1 : hasil2

    int a = 2, b = 5;
    string hasil_1 = "Betul";
    string hasil_2 = "Salah";

    cout << "Nilai a : " << a << endl;
    cout << "Nilai b : " << b << endl;

    cout << (a > b ? hasil_1 : hasil_2) << endl;
    cout << (a <= b ? hasil_1 : hasil_2) << endl;
    
    cout << endl;

    return 0;

}