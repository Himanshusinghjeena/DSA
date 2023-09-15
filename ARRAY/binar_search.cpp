#include <iostream>
using namespace std;

void display(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int binarysearch(int arr[], int size, int element)
{
    int low=0, mid, high=size-1;

    while (low <= high)
    {

        mid = (high + low) / 2;
        if (arr[mid] == element)
        {
            return mid;
        }

        else if (arr[mid] < element)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {2, 4, 7, 9, 11, 15, 22, 42, 68, 70, 74, 88, 92};
    int size = sizeof(arr) / sizeof(int);
    display(arr, size);
    cout << endl;
    int n;
    cout << "Enter no. you want to Search in above Array : ";
    cin >> n;
    int searchindex = binarysearch(arr, size, n);
    cout << n << " is found at index : " << searchindex;
    return 0;
}