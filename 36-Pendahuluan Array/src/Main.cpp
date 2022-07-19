
#include <iostream>
using namespace std;

int data [5];

int main () {

    cout << "Pendahuluan Array \n" << endl;

    cout << "Berikut data yang disajikan : " << endl;

    for (int s = 1; s <= 5; s++) {
        int nilai = s + 3;
        cout << "Data [" << s << "] = " << nilai << endl;    
    }

    cout << endl;

    return 0;

}