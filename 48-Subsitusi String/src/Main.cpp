
#include <iostream>
#include <string>

using namespace std;

int main () {

    cout << "Subsitusi String\n" << endl;

    string kalimat1 = "Halo kawan, apa kabar kamu?";
    string kalimat2 = "Aku adalah seorang Superman";

    cout << "Kalimat 1 : " << kalimat1 << endl;
    cout << "Kalimat 2 : " << kalimat2 << endl;

    cout << "\n------- Swap -------\n" << endl;   

    kalimat1.swap (kalimat2);

    cout << "Kalimat 1 : " << kalimat1 << endl;
    cout << "Kalimat 2 : " << kalimat2 << endl;

    cout << "\n------- Replace -------\n" << endl;   

    int kamu = kalimat2.find ("ka");
    kalimat2.replace (kamu,5,"Grido");
    int superman = kalimat1.rfind ("Su");
    kalimat1.replace (superman, 8, "Spiderman");

    cout << "Kalimat 1 : " << kalimat1 << endl;
    cout << "Kalimat 2 : " << kalimat2 << endl;

    cout << "\n------- Insert -------\n" << endl;

    kalimat1.insert (kalimat1.rfind ("an") + 2, " hebat");
    kalimat2.insert (kalimat2.find ("o,") + 1, " ganteng");

    cout << "Kalimat 1 : " << kalimat1 << endl;
    cout << "Kalimat 2 : " << kalimat2 << endl;

    cout << endl;

    return 0;

}