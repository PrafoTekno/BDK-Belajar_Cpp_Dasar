
#include <iostream>
using namespace std;

// Global Variable
int x = 2;

int main () {

    cout << "Scope Variable\n" << endl;

    cout << "Nilai x (Global Variable) : " << x << endl;

    // Local Variable
    int x = 5;

    cout << "Nilai x (Local Variable) : " << x << endl;

    {
        // Block Variable
        int x = 8;

        cout << "Nilai x (Block Variable) : " << x << endl;
    }

    cout << endl;

    return 0;

}