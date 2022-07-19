
#include <iostream>
#include <string>

using namespace std;

struct shinobi {

    string nama;
    int code;
    string status;

};

struct misi {

    string nama;
    char ranking;
    string tempat;
    int bonus;
    shinobi shinobi_1;
    shinobi shinobi_2;
    shinobi shinobi_3;
    shinobi shinobi_4;

};

int main () {

    cout << "Nesting Struct\n" << endl;

    // Struct shinobi
    shinobi ninja_1, ninja_2, ninja_3, ninja_4;
    
    ninja_1.nama = "Kakashi";
    ninja_1.code = 1543;
    ninja_1.status = "Jonin";

    ninja_2.nama = "Naruto";
    ninja_2.code = 1367;
    ninja_2.status = "Genin";

    ninja_3.nama = "Sakura";
    ninja_3.code = 1368;
    ninja_3.status = "Chunin";

    ninja_4.nama = "Sasuke";
    ninja_4.code = 1369;
    ninja_4.status = "Genin"; 

    // Struct Misi
    misi misi_1, misi_2;

    misi_1.nama = "The bandit";
    misi_1.ranking = 'A';
    misi_1.tempat = "Kirigakure";
    misi_1.bonus = 240000;
    misi_1.shinobi_1 = ninja_1;
    misi_1.shinobi_2 = ninja_2;
    misi_1.shinobi_3 = ninja_3;
    misi_1.shinobi_4 = ninja_4;

    misi_2.nama = "Pengembalian Dokumen Negara";
    misi_2.ranking = 'S';
    misi_2.tempat = "Lembah Kematian";
    misi_2.bonus = 480000;
    misi_2.shinobi_1 = ninja_1;

    // Output
    cout << "-------- Misi 1 --------\n" << endl;

    cout << "Nama misi : " << misi_1.nama << endl;
    cout << "Ranking misi : " << misi_1.ranking << endl;
    cout << "Tempat misi : " << misi_1.tempat << endl;
    cout << "Bonus misi : " << misi_1.bonus << endl << endl;
    cout << "Shinobi : \n" << endl;
    cout << "" << misi_1.shinobi_1.nama << "  ||  " << misi_1.shinobi_1.code << "  ||  " << misi_1.shinobi_1.status << endl;
    cout << "" << misi_1.shinobi_2.nama << "  ||  " << misi_1.shinobi_2.code << "  ||  " << misi_1.shinobi_2.status << endl;
    cout << "" << misi_1.shinobi_3.nama << "  ||  " << misi_1.shinobi_3.code << "  ||  " << misi_1.shinobi_3.status << endl;
    cout << "" << misi_1.shinobi_4.nama << "  ||  " << misi_1.shinobi_4.code << "  ||  " << misi_1.shinobi_4.status << endl;

    cout << endl;

    cout << "-------- Misi 2 --------\n" << endl;

    cout << "Nama misi : " << misi_2.nama << endl;
    cout << "Ranking misi : " << misi_2.ranking << endl;
    cout << "Tempat misi : " << misi_2.tempat << endl;
    cout << "Bonus misi : " << misi_2.bonus << endl << endl;
    cout << "Shinobi : \n" << endl;
    cout << "" << misi_2.shinobi_1.nama << "  ||  " << misi_2.shinobi_1.code << "  ||  " << misi_2.shinobi_1.status << endl;

    cout << endl;

    return 0;

}
