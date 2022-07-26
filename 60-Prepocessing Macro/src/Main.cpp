
#include <iostream>

using namespace std;

//Prepocessing macro
#define A 20
#define KUADRAT(X) (X*X) //#define nama(atribut) (Perlakuan)
#define MIN(A,B) ((A < B) ? A:B)

int main () {

    cout << "Prepocessing Macro\n" << endl;

    cout << "Nilai A = " << A << endl;
    cout << "Nilai A^2 = " << KUADRAT (A) << endl;
    cout << "Nilai MIN = " << MIN (6,3) << endl;

    #undef NAMA //Macro Prepocessing
    #define NAMA "udin"
    cout << "Nama : " << NAMA << endl;

    cout << endl;

    return 0;

}