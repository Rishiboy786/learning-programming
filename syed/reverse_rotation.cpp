#include <iostream>
#include "array.h"
using namespace std;

void rev_rotation(int arr[], int size, int d)
{
    arrreverse(arr, d);
    arrreverse(arr + d, size - d);
    arrreverse(arr, size);
}

int main()
{
    int arr[6] = {1, 2, 3, 4, 5, 6};
    int size = *(&arr + 1) - arr;
    int d = 2;
    arrprint(arr, size);
    rev_rotation(arr, size, d);
    arrprint(arr, size);
}