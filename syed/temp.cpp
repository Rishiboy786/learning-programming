#include <iostream>
#include "array.h"
using namespace std;

int main()
{
    int arr[6] = {1, 2, 3, 4, 5, 6};
    int size = *(&arr + 1) - arr;
    arrprint(arr, size);
}