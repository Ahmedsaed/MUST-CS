#include <iostream>

using namespace std;

int main()
{
    int x[10];

    cout << "Enter 10 numbers: ";
    for (int i = 0; i < 10; i++)
    {
        cin >> x[i];
    }
    
    for (int i = 9; i >= 0; i--)
    {
        cout << x[i] << ' ';
    }
}