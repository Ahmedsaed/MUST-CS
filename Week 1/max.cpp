// Write an algorithm to find and print the maximum of given three numbers.

#include <iostream>

using namespace std;

int main() 
{
    int x, y, z;
    cout << "First number: ", cin >> x;

    cout << "Second number: ", cin >> y;

    cout << "Third number: ", cin >> z;

    cout << "Max: ";
    if (x > y)
    {
        if (x > z)
        {
            cout << x;
        }
        else
        {
            cout << z;
        }
    }
    else
    {
        if (y > z)
        {
            cout << y;
        }
        else
        {
            cout << z;
        }
    }
}