#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int k;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n-i; j++)
        {
            cout << " ";
        }
         k=i;
        for(int j=1;j<=i;j++)
        {
         cout<<k;
         k--;
        }
        int l=2;
        for(int j=1;j<i;j++)
        {
         cout<<l;
         l++;
        }
        cout<<" "<<endl;
    }
   
    return 0;
}