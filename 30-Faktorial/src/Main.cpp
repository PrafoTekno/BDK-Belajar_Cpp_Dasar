
#include <iostream>
using namespace std;

void Faktorial_Iterasi (int a) {

    int hasil; 
    int hasil1 = a;

    cout << "Hasil iterasinya adalah : ";

    for (int i = a-1; i > 1; i--) {
        hasil = hasil1 * i;
        hasil1 = hasil;
        cout << hasil << " ";   
    }

    cout << endl;

}

int Faktorial_Rekursif (int a) {

    //cout << endl;

    if (a <= 1) {
        //cout << a << endl;
        return a;
    } else {
       // cout << a * Faktorial_Rekursif (a - 1) << endl;
        return a * Faktorial_Rekursif (a - 1);
    }

}

int main () {

    cout << "Faktorial\n" << endl;

    int bilangan;

    cout << "Berapa faktorial : ";
    cin >> bilangan;
    cout << "Hasilnya rekursifnya adalah : " << Faktorial_Rekursif (bilangan) << endl;
    Faktorial_Iterasi (bilangan);

    cout << endl;

    return 0;

}