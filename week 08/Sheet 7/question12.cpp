#include <iostream>

using namespace std;

void cal(int& sum, int testScore);

int main()
{
    int x = 5;

    cal(x, 5);

    cout << x;
}

void cal(int& sum, int testScore)
{
    sum += testScore;
}