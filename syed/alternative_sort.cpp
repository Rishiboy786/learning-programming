#include <iostream>
#include "array.h"
using namespace std;

void alternate_sort(int arr[], int size)
{
    int odd = 1;
    for (int d = 0; d < size - 1; d++)
    {
        if (odd == 1)
        {
            arrswap(arr, d, d + arrlargest(arr + d, size - d));
            odd = 0;
        }
        else
        {
            arrswap(arr, d, d + arrsmallest(arr + d, size - d));
            odd = 1;
        }
    }
}

int main()
{
    int arr[8] = {100, 1000, 1001, 18, 12, 6, 45, 98};
    int size = *(&arr + 1) - arr;

    arrprint(arr, size);
    alternate_sort(arr, size);
    arrprint(arr, size);
}