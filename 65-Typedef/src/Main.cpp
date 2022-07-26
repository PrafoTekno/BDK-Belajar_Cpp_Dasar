
#include <iostream>

using namespace std;

int main () {

    cout << "Typedef\n" << endl;

    //typedef untuk memberikan alias terhadap tipe data
    typedef int I;
    typedef int vector2D[2];
    typedef char C;
    
    using dou = double;

    I a = 23;
    I b = 4;

    vector2D c = {4,5};
    vector2D d = {7,8};

    C e = 's';
    C f = 'r';

    dou g = 546.789;

    cout << a << endl;
    cout << b << endl;
    cout << c[0] << " | " << c[1] << endl;
    cout << d[0] << " | " << d[1] << endl;
    cout << e << endl;
    cout << f << endl;
    cout << g << endl;

    cout << endl;

    return 0;

}