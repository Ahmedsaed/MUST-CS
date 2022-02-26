#include <iostream>

using namespace std;

// Function Prototypes
bool IsPrime(int n);

int main() {
    cout << boolalpha;
    cout << IsPrime(7) << endl;
    cout << IsPrime(12) << endl;
    cout << IsPrime(13) << endl;
    cout << IsPrime(9) << endl;
}

// https://en.wikipedia.org/wiki/Primality_test#:~:text=The%20simplest%20primality%20test%20is,Otherwise%2C%20it%20is%20prime.
bool IsPrime(int n)
{
    if (n == 2 || n == 3)
        return true;

    if (n <= 1 || n % 2 == 0 || n % 3 == 0)
        return false;

    for (int i = 5; i * i <= n; i += 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }

    return true;
}