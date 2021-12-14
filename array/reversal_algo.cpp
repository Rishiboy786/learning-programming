#include <iostream>
using namespace std;

void arrprint(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

void rotation(int arr[], int size)
{
    int temp = arr[size - 1];
    for (int i = size - 1; i >= 0; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[0] = temp;
}
void swap(int arr[], int a, int b)
{
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}
void reverse(int arr[], int size)
{
    for (int i = 0; i < (size + 1) / 2; i++)
    {
        swap(arr, 0 + i, size - i);
    }
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int size = *(&arr+1) - arr;
    
    arrprint(arr, size);
    rotation(arr, size);
    arrprint(arr, size);
    //reverse(arr,5);
    // arrprint(arr, size);
   
    
    return 0;
}