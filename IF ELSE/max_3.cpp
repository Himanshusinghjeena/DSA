#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout<<"Enter three Numbers : "<<endl;
    cin >> a >> b >> c;

    if (a > b)
    {
        if (a > c)
        {
            cout << " a is maximum" << endl;
        }
        else
        {
            cout << " c is maximum" << endl;
        }
    }
    else
    {
        if (b > c)
        {
            cout << " b is maximum" << endl;
        }
        else
        {
            cout << " c is maximum" <<endl;
        }
    }

return 0;
}