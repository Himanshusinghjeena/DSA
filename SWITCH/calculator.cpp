#include <iostream>
using namespace std;

int main()
{
    float a, b;
    cout << "Enter 2 Numbers : ";
    cin >> a >> b;

    char op;
    cout << "Enter operator : ";
    cin >> op;

    switch (op)
    {
    case '+':
        cout << a + b << endl;
        break;
    case '-':
        cout << a - b << endl;
        break;
    case '*':
        cout << a * b << endl;
        break;
    case '/':
        cout << a / b << endl;
        break;
    default:
    cout<<"Enter Any Valid Operator";
        break;
    }
    return 0;
}