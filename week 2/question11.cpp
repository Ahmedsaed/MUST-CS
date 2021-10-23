/*
Write a program that prompts the user to input a decimal number and outputs the number rounded to 
the nearest integer.
*/

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