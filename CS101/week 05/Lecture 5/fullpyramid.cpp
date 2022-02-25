#include <iostream>

using namespace std;

int main()
{
    for (int i = 1; i <= 5 ; i++)
    {
        for (int k = 0; k < 5 - i; k++)
            cout << ' ';

        for (int j = 1; j <= 2*i - 1; j++)
            cout << "*";
        
        cout << endl;
    }
}