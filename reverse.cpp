#include <iostream>
using namespace std;

int main()
{
    int a;
    cout<<"enter number: ";
    cin >> a;
    int reverse = 0;
    while (a > 0)
    {
        int last_digit = a % 10;
        reverse = reverse * 10 + last_digit;
        a = a / 10;
    }
    cout << reverse;
    ;
    return 0;
}