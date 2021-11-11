#include <iostream>

using namespace std;

int main()
{
    int counter = 0; // Loop control variable
    int number = 0; // The number read
    int zeros = 0; // Zero count
    int evens = 0; // Even count
    int odds = 0; // Odd count

    for (counter; counter < 20; counter++)
    {
        cin >> number;
        if (number == 0)
            zeros++;
        else if (number % 2 == 0)
        {
            evens++;
        }
        else
        {
            odds++;
        }
    }

    cout << "Zeros: " << zeros << endl;
    cout << "envens: " << evens << endl;
    cout << "odds: " << odds << endl;
}