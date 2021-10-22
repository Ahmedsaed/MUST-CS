// Write an algorithm to read a given character and print “Male” if the given character is ‘m’ or ‘M’, or print “Female” if the given character is ‘f’ or ‘F’, or print “Invalid” otherwise.

#include <iostream>

using namespace std;

int main()
{
    char c;

    cout << "Character: ", cin >> c;

    if (c == 'm' || c == 'M')
    {
        cout << "Male";
    }
    else if (c == 'f' || c == 'F')
    {
        cout << "Female";
    }
    else
    {
        cout << "Invalid";
    }
}