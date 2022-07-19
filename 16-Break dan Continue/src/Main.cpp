
#include <iostream>
using namespace std;

int main () {

    cout << "Break\n" << endl;

    for (int i = 1; i < 8; i++) {
        cout << "Index ke " << i << endl;
        if (i == 5) {
            break;
        }
    }

    cout << "\nProgram selesai\n" << endl;

    cout << "Continue\n" << endl;

    for (int i = 1; i < 8; i++) {
        cout << "Index ke " << i << endl;
        if (i == 6) {
            continue;
        }
    }

    cout << "\nProgram selesai\n" << endl;

    return 0;

}