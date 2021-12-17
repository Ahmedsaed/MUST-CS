#include <iostream>

using namespace std;

bool isUpper(char ch);

int main()
{
    cout << isUpper('A');
}

bool isUpper(char ch)
{
    if (ch >= 'A' && ch <= 'Z') // (ch >= 65 && ch <= 90) where 65, 90 are the ascii codes of 'A', 'Z' respectively
        return true;
    else
        return false;
}
