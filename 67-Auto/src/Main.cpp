
#include <iostream>
#include <string>
#include <typeinfo>

using namespace std;

template <typename S, typename R>
auto min (S a, R b) { //2 dekalrasi, maka 2 typename
    return (a < b) ? a : b;
}

int main () {

    cout << "Auto\n" << endl;

    //Auto = untuk membuat variable dengan tipe data yang otomatis

    int a = 9;
    auto b = 9.4f; //penggunaan auto kurang efektif
    double c = 10.456;
    auto d = 'u'; //kurang efektif
    string e = "Halo apa kabar";
    auto f = min (a,c); //penggunaan auto yang lebih efektif

    cout << a << "\ttipe : " << typeid (a).name () << endl;
    cout << b << "\ttipe : " << typeid (b).name () << endl;
    cout << c << "\ttipe : " << typeid (c).name () << endl;
    cout << d << "\ttipe : " << typeid (d).name () << endl;
    cout << e << "\ttipe : " << typeid (e).name () << endl;
    cout << f << "\ttipe : " << typeid (f).name () << endl;

    cout << endl;

    return 0;

}