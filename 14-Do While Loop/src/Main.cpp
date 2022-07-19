
#include <iostream>
using namespace std;

int main () {

    cout << "Do While \n" << endl;

    int s = 1;

    do { // Pasti di eksekusi perintahnya minimal 1 kali
        cout << "Halo Apa Kabar (" << s << ")" << endl;
        s += 2;
    } while (s < 10);

    return 0;

}