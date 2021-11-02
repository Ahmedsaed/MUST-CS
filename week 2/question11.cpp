/*
Write a program that prompts the user to input a decimal number and outputs the number rounded to 
the nearest integer.
*/

#include <iostream>

using namespace std;

int main()
{
    double decimal;

    cout << "Write a decimal number: ", cin >> decimal;

    int number = decimal + 0.5;

    cout << "Rounded number: " << number;
}

/* this answer should work, but it's not correct as the question doesn't allow us to import other libraries.

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float n;

    cout << "Decimal Number: ", cin >> n;

    n = round(n);

    cout << "Rounded Number: " << n;
}
*/