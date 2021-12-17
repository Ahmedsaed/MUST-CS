//Write an algorithm to determine whether a given integer number is positive, negative or zero, and and then print the result.

#include <iostream>

using namespace std;

int main()
{
    int n;

    cout << "Number: ", cin >> n;

    if (n == 0)
    {
        cout << "The number is zero";
    }
    else if (n > 0)
    {
        cout << "The number is positive";
    }
    else
    {
        cout << "The number is negative";
    }
}