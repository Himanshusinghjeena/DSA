#include <iostream>
using namespace std;

int main()
{
    char c;
    int LowercaseVowel, UppercaseVowel;

    cout << "Enter an alphabet: ";
    cin >> c;

    LowercaseVowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');

    UppercaseVowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

    if (LowercaseVowel || UppercaseVowel)
    {
        cout << c << " is a vowel.";
    }
    else
    {
        cout << c << " is a consonant.";
    }

    return 0;
}