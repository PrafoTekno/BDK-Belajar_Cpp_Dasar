
#include <iostream>
using namespace std;

int main () {

    int a = 4;
    int b = 6;
    int hasil;

    cout << endl;

    cout << " Komparasi " << endl;

    cout << "---------------Sebanding-----------------" << endl;
    hasil = (a == b);
    cout << a << " > " << b << " = " << hasil << endl;
    
    cout << endl;

    cout << "---------------Kurang Dari-----------------" << endl;
    hasil = (a < b);
    cout << a << " < " << b << " = " << hasil << endl;
    
    cout << endl;

    cout << "---------------Lebih Dari-----------------" << endl;
    hasil = (a > b);
    cout << a << " > " << b << " = " << hasil << endl;
    
    cout << endl;

    cout << "---------------Tidak Sebanding-----------------" << endl;
    hasil = (a != b);
    cout << a << " > " << b << " = " << hasil << endl;
    
    cout << endl;

    cout << "---------------Lebih Dari Sama Dengan-----------------" << endl;
    hasil = (a >= b);
    cout << a << " >= " << b << " = " << hasil << endl;
    
    cout << endl;

    cout << "---------------Kurang Dari Sama Dengan-----------------" << endl;
    hasil = (a <= b);
    cout << a << " <= " << b << " = " << hasil << endl;
    
    cout << endl;

    return 0;

}