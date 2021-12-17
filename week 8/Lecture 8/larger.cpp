#include <iostream>

using namespace std;

int larger(int, int);

int main()
{
    int max;

    cin >> max;

    for (int i = 0; i < 9; i ++)
    {
        int num;
        cin >> num;

        max = larger(num, max);
    }

    cout << max;
}

int larger(int a, int b)
{
    if (a >= b)
        return a;
    
    return b;
}