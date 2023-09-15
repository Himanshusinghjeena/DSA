 #include<iostream>
 using namespace std;
 

int main()
{
    int row;
    int col;
    cout<<"Enter Row And Column : ";
    cin>>row>>col;

    for(int i=1;i<=row;i++)
    {
        for(int i=1;i<=col;i++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
return 0;
}