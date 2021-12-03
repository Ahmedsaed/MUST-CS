#include <iostream>

using namespace std;

void cal(double x, double y);

int main()
{
    cal(2, 6);
    cal(0, 6);
}

void cal(double x, double y)
{
    if (x != 0)
        cout << y / x;
    else
        cout << "Cannot divide the second number by the first number as the first number is equal to 0";
}