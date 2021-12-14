#include<iostream>

using namespace std;
void arrprint(int arr[])
{
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}
int main()
{
    int arr[5]={2,5,6,8,6};
    arrprint(arr);

    return 0;
}