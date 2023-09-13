#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter the three sides of Traingle: ";
    cin >> a >> b >> c;

    if (a == b && b == c)
    {
        cout << "This is an Eqilateral Traingle. ";
    }
    else if (a == b || b == c || c == a)
    {
        cout << "This is an Isoceles Taingle. ";
    }
    else
    {
        cout<<"This is a Scalence Traingle. ";
    }
    return 0;
}