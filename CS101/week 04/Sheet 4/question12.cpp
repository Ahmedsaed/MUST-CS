#include <iostream>

using namespace std;

int main()
{
    double overSpeed, fine;

    if (overSpeed > 0 && overSpeed <= 5)
    {
        fine = 20.0;
    }
    else if (overSpeed > 5 && overSpeed <= 10)
    {
        fine = 75.0;
    }
    else if (overSpeed > 10 && overSpeed <= 15)
    {
        fine = 150.0;
    }
    else if (overSpeed > 15)
    {
        fine = 150.0 + 20.0 * (overSpeed - 15);
    }
}