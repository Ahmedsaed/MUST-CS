#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int count = 10;
    double sum = 0;

    while (count > 8)
    {
        sum = sum + pow(count, 2.0);
        count--;
    }

    cout << sum << endl;
}