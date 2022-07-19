
#include <iostream>
#include <string>

int main () {

    std::cout << "Get Line Console String\n" << std::endl;

    std::string data_input;

    std::cout << "Masukan kalimat : ";
    std::getline (std::cin, data_input); 

    std::cout << "\nInputan nya adalah : " << data_input << std::endl;

    int posisi = 0, jumlah = 0;

    while (true) {

        posisi = data_input.find (" ", 1 + posisi);
        jumlah ++;

        if (posisi < 0) {
            break;
        }
        
    }

    std::cout << "Jumlah kata nya adalah " << jumlah << " kata\n" << std::endl;

    return 0;

}


