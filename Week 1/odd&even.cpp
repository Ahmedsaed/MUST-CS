// Write an algorithm to determine whether a given integer number is odd or even, and then print the result. [Hint: An even number is a multiple of two. Any multiple of two leaves a remainder of zero when divided by 2]

#include <iostream>

using namespace std;

int main()
{
    int n;

    cout << "Number: ", cin >> n;

    if (n%2 == 0)
    {
        cout << "Even";
    }
    else
    {
        cout << "Odd";
    }
}