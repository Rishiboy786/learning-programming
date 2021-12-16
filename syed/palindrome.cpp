#include <iostream>
#include <string>
using namespace std;

void strswap(string &str, int a, int b)
{
    char temp = str[a];
    str[a] = str[b];
    str[b] = temp;
}

void strreverse(string &str)
{
    for (int i = 0; i < str.length() / 2; i++)
    {
        strswap(str, i, str.length() - i - 1);
    }
}

int main()
{
    string str;
    cin >> str;
    strreverse(str);
    cout << str << endl;
}