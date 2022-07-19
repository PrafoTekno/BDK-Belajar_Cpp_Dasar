
#include <iostream>
using namespace std;

const int baris = 3;
const int kolom = 3;

void Menampilkan_ArrayMD (int *array, int baris, int kolom) {

    int index = 0;

    for (int y = 0; y < baris; y++) {
        cout << "[ ";
        for (int x = 0; x < kolom; x++) {
            cout << *array + index << " ";
            index++;
        }
        cout << "] " << endl;
    }

}

int main () {

    cout << "Matrix (built in)\n" << endl;

    int arrayMD[baris][kolom] = {1,2,3,4,5,6,7,8,9};

    cout << "Index array [0][0] : " << arrayMD[0][0] << endl;
    cout << "Index array [0][1] : " << arrayMD[0][1] << endl;
    cout << "Index array [1][0] : " << arrayMD[1][0] << endl;
    cout << "Index array [2][0] : " << arrayMD[2][0] << endl;

    cout << endl; 

    Menampilkan_ArrayMD (*arrayMD, baris, kolom);

    cout << endl;

    return 0;

}