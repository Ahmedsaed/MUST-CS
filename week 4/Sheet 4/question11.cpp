#include <iostream>

using namespace std;

int main()
{
    double sales, bonus;

    if (sales > 20000.0)
    {
        bonus = 0.10;
    }
    else if (sales > 10000.0 && sales <= 20000.0)
    {
        bonus = 0.50;
    }
    else
    {
        bonus = 0.0;
    }
}