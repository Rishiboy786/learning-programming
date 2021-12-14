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

int main()
{
    int arr[5] = {2, 5, 6, 8, 6};
    int size = *(&arr + 1) - arr;

    arrprint(arr, size);
    return 0;
}