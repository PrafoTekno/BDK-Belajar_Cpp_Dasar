
#include <iostream>
using namespace std;

int main () {

    cout << "Deret Fibonacci\n" << endl;

    int n;
    int f_n1 = 1, f_n2 = 0;
    int f_n;

    cout << "Mau deret yang ke berapa : ";
    cin >> n;

    cout << endl;

    f_n = f_n1 + f_n2;
    cout << f_n << " ";

    for (int s = 1; s <= n; s++) {
        f_n = f_n1 + f_n2;
        f_n2 = f_n1;
        f_n1 = f_n;
        cout << f_n << " ";
    }

    cout << "\n\nDeretnya adalah " << f_n << endl;

    cout << endl;

    return 0;

}