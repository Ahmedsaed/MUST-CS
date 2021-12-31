#include <iostream>

using namespace std;

int main()
{
    int firstNum, secondNum;

    cin >> firstNum >> secondNum;

    cout << "Odd Numbers: ";
    for (int i = firstNum; i <= secondNum; i++)
        if (i % 2 != 0) cout << i << " ";
}