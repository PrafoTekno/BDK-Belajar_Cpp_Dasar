
#include <iostream>
using namespace std;

int main () {

    int data;

    cout << "Switch Case\n" << endl;

    cout << "Masukan sebuah angka : ";
    cin >> data;
    cout << "Angka yang dimasukan adalah " << data << endl;

    switch (data) { // Tipe data harus int 

     case 1 :
        cout << "Yey hebat" << endl;
        break;
     case 2 :
        cout << "Mantap kawan" << endl;
        break;
     case 3 : 
        cout << "Ayo semangat" << endl; 
    
     default:
        cout << "Jangan menyerah" << endl;
        break;
    
    }

    return 0;

}