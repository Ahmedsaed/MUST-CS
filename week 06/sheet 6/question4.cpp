#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int beta;

    cin >> beta;

    switch (beta % 7)
    {
    case 0:
    case 1:
        beta = beta * beta;
        break;
    case 2:
        beta++;
        break;
    case 3:
        beta = static_cast<int>(sqrt(beta * 1.0));
        break;
    case 4:
        beta = beta + 4;
    case 6:
        beta = beta--;
        break;
    default:
        beta = -10;
    }

    cout << beta;
}