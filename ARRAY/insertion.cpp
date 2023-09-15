#include <iostream>
using namespace std;

void display(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int insertion(int arr[], int size, int element, int index, int capacity)
{
    if (size >= capacity)
    {
        return -1;
    }
    for (int i = size - 1; i >= index; i--)
    {
        arr[i + 1] = arr[i]; // shifting elements to right by one position.
    }
    // inserting the new element at required location in array.
    arr[index] = element;
    return 1;
}
int main()
{
    int arr[100] = {3, 6, 9, 12, 55, 78};
    int size = 6, element = 34, index = 4;
    display(arr, size);
    insertion(arr, size, element, index, 100);
    size += 1;
    display(arr, size);
    return 0;
}