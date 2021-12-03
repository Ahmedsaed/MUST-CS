#include <iostream>

using namespace std;

bool isUpper(char ch);

int main()
{
    cout << isUpper('A');
}

bool isUpper(char ch)
{
    if (ch >= 65 && ch < 91)
        return true;
    else
        return false;
}