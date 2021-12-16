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

void palindrome(string str)
{
    string temp = str;
    strreverse(temp);
    if (temp == str)
    {
        cout << "yes";
    }
    else 
    {
        cout << "no";
    }
}

int main()
{
    string str;
    cin >> str;
    palindrome(str);
}