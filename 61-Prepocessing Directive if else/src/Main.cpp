
#include <iostream>

//If Else

#define A 4
#define B 10

#if A > B 
    #define MAX A

#else 
    #define MAX B

#endif

using namespace std;

int main () {

    cout << "Prepocessing Directive If Else\n" << endl;

    cout << "Nilai MAX = " << MAX << endl;

    cout << endl;

    return 0;

}