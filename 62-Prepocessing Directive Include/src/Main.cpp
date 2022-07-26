
#include <iostream>
#include "Library.h"

using namespace std;

int main () {

    cout << "Prepocessing Directive Include\n" << endl;

    cout << "Kata : " << KATA ("Bagus") << endl;

    int a = 3, b = 5;
    cout << a << " + " << b << " = " << JUMLAH (a,b) << endl;

    cout << a << "^2 = " << KUADRAT (a) << endl;

    cout << endl;

    return 0;

}
