#include <iostream>
#include <iomanip>

using namespace std;

void threeTimes(double x);

int main()
{
    threeTimes(3);
}

void threeTimes(double x)
{
    cout << fixed << showpoint << setprecision(2) << x * 3;
}