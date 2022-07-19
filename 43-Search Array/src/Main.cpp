
#include <iostream>
#include <array>
#include <algorithm>

const int ukuranArray = 10;

void tampilArray (std::array <int, ukuranArray> &data) {

    std::cout << "Data : ";

    for (int &s : data) {
        std::cout << s << " ";
    }

    std::cout << std::endl;

}

int main () {

    std::cout << "Search Array\n" << std::endl;

    std::array <int, ukuranArray> angka = {1,4,2,5,2,7,5,3,9,1};

    tampilArray (angka);

    int cariAngka;
    bool status;

    std::cout << "Mencari angka : ";
    std::cin >> cariAngka;

    std::cout << std::endl;

    std::sort (angka.begin (), angka.end ());
    
    std::cout << "Data yang telah diurutkan\n";
    tampilArray (angka);  
    status = std::binary_search (angka.begin (), angka.end (), cariAngka);

    if (status == 1) {
        std::cout << "\nAda " << cariAngka << " pada data tersebut!\n";
    } else {
        std::cout << "\nTidak ada " << cariAngka << " pada data tersebut!\n";
    }

    std::cout << std::endl;

    return 0;

}