
#include <iostream>
#include <array>
#include <algorithm>

const int sizeArray = 10;

void tampilAngka (std::array <int, sizeArray> &angka) {

    std::cout << "Angka : ";

    for (int &a : angka) {
        std::cout << a << " ";
    }

    std::cout << std::endl;

}

void tampilHuruf (std::array <char, sizeArray> &huruf) {

    std::cout << "Huruf : ";

    for (char &a : huruf) {
        std::cout << a << " ";
    }

    std::cout << std::endl;

}

int main () {

    std::cout << "Sorting Array standard Library\n" << std::endl;

    std::array <int, sizeArray> bilangan = {2,3,5,1,8,9,2,10,3,12};
    std::array <char, sizeArray> karakter = {'a','o','p','a','b','l','s','r','f','h'};

    tampilAngka (bilangan);
    tampilHuruf (karakter);
    
    std::cout << std::endl;

    std::cout << "\n-------- Sort --------\n" << std::endl;

    std::sort (bilangan.begin (), bilangan.end ());
    std::sort (karakter.begin (), karakter.end ());
    // Sort ada di library algorithm dan merupakan member dari standard library (std);

    tampilAngka (bilangan);
    tampilHuruf (karakter);

    std::cout << std::endl;

    return 0;

}