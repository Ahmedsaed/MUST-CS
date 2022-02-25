#include <iostream>
#include <cmath>

using namespace std;

bool check(double a, double b, double c);

int main()
{
    cout << check(2, 3, 8);
}

bool check(double a, double b, double c)
{
    if (pow(a, b) == c)
        return true;
    else
        return false;
}