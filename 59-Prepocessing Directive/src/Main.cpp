
#include <iostream> //# merupakan prepocessing, jadi tidak dicompile
#include <string>

#define a_def 10 // ga di taro di dalam memory, disebut prepocessing jadi ga punya address

int a_int = 10; // di taro di dalam memory, jadi memiliki address

using namespace std;

int main () {

    cout << "Prepocessing Directive\n" << endl;

    cout << "Nilai a_def = " << a_def << endl;
    //cout << "Address a_def = " << &a_def << endl; //tidak bisa ini

    cout << "Nilai a_int = " << a_int << endl;
    cout << "Address a_int = " << &a_int << endl;

    cout << endl;

    return 0;

}