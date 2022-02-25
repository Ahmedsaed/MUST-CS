#include <iostream>

using namespace std;

int main()
{
    int x, result = 1;

    cout << "Enter a number: ", cin >> x;

    for (int i = x; i > 0; i--)
        result *= i;

    cout << "Factorial: " << result;
}