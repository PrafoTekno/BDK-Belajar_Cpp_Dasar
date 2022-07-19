
#include <iostream>
#include <string>
using namespace std;

void Kucing (string nama) {

    cout << "Nama kucing " << nama << endl;
    cout << nama << " sedang tidur" << endl;
    cout << "Hobi " << nama << " adalah tidur, makan dan bermain" << endl;
    cout << nama << " adalah kucing yang baik dan setia" << endl;

}

int main () {

    cout << "Fungsi Void \n" << endl;

    string kucing;

    cout << "Masukan sebuah nama : ";
    cin >> kucing;
    
    cout << endl;

    Kucing (kucing);

    cout << endl;

    return 0;

}