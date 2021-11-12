#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int firstNum, secondNum;

    cout << "Enter two numbers? ";
    cin >> firstNum >> secondNum;

    firstNum++;
    for (firstNum; firstNum < secondNum; ++firstNum)
    {
        if (firstNum % 2 == 1)
        {
            cout << firstNum << endl;
        }
    }
}
