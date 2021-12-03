#include <iostream>
#include <cmath>

using namespace std;

double num(double x, double y, double z);

int main()
{
    cout << num(1, 2, 3);
}

double num(double x, double y, double z)
{
    return pow(x * y, z);
}