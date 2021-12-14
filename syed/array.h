#ifndef ARRAY_H
#define ARRAY_H

void arrprint(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";
}

void arrswap(int arr[], int a, int b)
{
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}

void arrreverse(int arr[], int size)
{
    size--;
    for (int i = 0; i < (size + 1) / 2; i++)
    {
        arrswap(arr, i, size - i);
    }
}


#endif