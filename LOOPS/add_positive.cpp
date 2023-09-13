 #include<iostream>
 using namespace std;
 

int main()
{
    int n;
    cout<<"enter any number :";
    cin>>n;

int sum=0;
    while(n>0)
    {
        sum=sum+n;
        cin>>n;
    }
    cout<<" Sum of all Positive Number is : "<<sum;
return 0;
}