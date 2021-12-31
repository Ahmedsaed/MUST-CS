#include <iostream>

using namespace std;

int factorial(int x);

int main()
{
    cout << factorial(5) << endl;
    cout << factorial(9) << endl;
}

int factorial(int x)
{
    int result = 1;

    for (int i = x; i > 0; i--)
    {
        result *= i;
    }

    return result;
}