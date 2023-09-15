#include <iostream>
using namespace std;

int main()
{
    char c;
    cout << "Enter Any Character : ";
    cin >> c;

    switch (c)
    {
    case  'A':
        cout << "is a vowel";
        break;
    case   'E':
        cout << "is a vowel";
        break;
    case 'I':
        cout << "is a vowel";
        break;
    case 'O':
        cout << "is a vowel";
        break;
    case 'U':
        cout << "is a vowel";
        break;
    case  'a':
        cout << "is a vowel";
        break;
    case   'e':
        cout << "is a vowel";
        break;
    case 'i':
        cout << "is a vowel";
        break;
    case 'o':
        cout << "is a vowel";
        break;
    case 'u':
        cout << "is a vowel";
        break;

    default:
    cout<<"is a consonant";
        break;
    }
    return 0;
}