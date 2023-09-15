#include <iostream>
using namespace std;

void display(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int search(int arr[], int size, int element)
{

    for (int i = 0; i < size; i++)
    {
        if (element == arr[i])
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {2, 54, 45, 76, 71, 85, 32, 56, 22, 56};
    int size = sizeof(arr) / sizeof(int);
    display(arr, size);
    cout << endl;
    int n;
    cout << "Enter no. you want to Search in above Array : ";
    cin >> n;
    int searchindex = search(arr, size, n);
    cout << n << " is found at index : " << searchindex;
    return 0;
}