 #include<iostream>
 using namespace std;
 
 void display(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
 int deletion(int arr[], int size, int index )
{

    for (int i =index; i < size-1; i++)
    {
        arr[i] = arr[i+1]; // shifting elements to right by one position.
    }
        return 1;
}
int main()
{
    int arr[100] = {3, 6, 9, 12, 55, 78};
    int size = 6, element = 12, index = 4;
    display(arr, size);
    deletion(arr, size, index);
    size -= 1;
    display(arr, size);
    return 0;
}