
#include <iostream>
#include "bdk.h"

void Fungsi () {
    std::cout << "Fungsi Biasa\n" << std::endl;
}

int main () {

    std::cout << "Namespace\n" << std::endl;

    Fungsi ();

    std::cout << bdk::s << std::endl;
    bdk::Fungsi ();
    std::cout << bdk::jumlah (5,10) << std::endl;

    std::cout << std::endl;

    return 0;

}