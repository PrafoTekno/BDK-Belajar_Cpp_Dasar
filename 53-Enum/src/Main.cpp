
#include <iostream>

using namespace std;

enum buah {apel, jeruk = 4, mangga, pepaya, anggur};

int main () {

    cout << "Enum\n" << endl;

    buah berbiji;

    berbiji = anggur;

    if (berbiji == pepaya) {
        cout << "Ini pepaya" << endl;
    } else {
        cout << "Ini bukan pepaya" << endl;
    }

    cout << "Index buah : " << berbiji << endl;

    cout << endl;

    return 0;

}