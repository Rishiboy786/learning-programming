#include <iostream>
using namespace std;

// function for printing an array
void arrprint(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

// function for rotating clockwise 
void rotation(int arr[], int size)
{
    int temp = arr[size - 1];
    for (int i = size - 1; i >= 0; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[0] = temp;
}

// fucntion for rotating anti-clockwise
void antirotation(int arr[], int size)
{
    int temp = arr[0];
    for (int i = 0; i <= size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    arr[size - 1] = temp;
}

int main()
{
    // declarations 
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = *(&arr + 1) - arr;

    // driver code
    arrprint(arr, size);
    antirotation(arr, size);
    arrprint(arr, size);
    rotation(arr, size);
    arrprint(arr, size);
    return 0;
}