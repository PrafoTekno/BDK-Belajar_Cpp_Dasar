
#include <iostream>
#include <string>

using namespace std;

void dataAngka (int val) {
    cout << "Nilai = " << val << endl;
}

int main () {

    cout << "Comma Operator\n" << endl;

    int a, b, c;

    a = (b = 3, dataAngka (b), c = 4, dataAngka (c), b + c);

    cout << a << endl << endl;

    return 0;

}