
#include <iostream>
#include <array>

using namespace std;

const int baris = 3;
const int kolom = 3;

void MenampilkanMatrix (array <array <int, kolom>, baris> &nilaiArray) {

    for (array <int, kolom> vectorBaris : nilaiArray) {
        
        cout << "[ ";
        for (int nilaiKolom : vectorBaris) {
            cout << nilaiKolom << " ";
        }
        cout << "]" << endl;

    }

}

int main () {

    cout << "Matrix (standard library) \n" << endl;
    array < array <int, kolom>, baris> nilaiMD = {0,1,2,3,4,5,6,7,8};

    MenampilkanMatrix (nilaiMD);

    cout << endl;

    return 0;

}