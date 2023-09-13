#include <iostream>
using namespace std;

int main()
{

    int a;  // variable Declaration
    a = 12; // variable initailisation

    cout << " size of int : " << sizeof(a) << endl;

    float b;
    cout << " size of float : " << sizeof(b) << endl;

    double c;
    cout << " size of double : " << sizeof(c) << endl;

    char d;
    cout << " size of char : " << sizeof(d) << endl;

    bool e;
    cout << " size of bool : " << sizeof(e) << endl;

    long int li;
    cout << " size of long int : " << sizeof(li) << endl;

    short int si;
    cout << " size of short int : " << sizeof(si) << endl;

    return 0;
}