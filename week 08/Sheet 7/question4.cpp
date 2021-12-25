#include <iostream>

using namespace std;

int secret(int m, int n);

int main()
{
    cout << secret(3, 6) << endl;
    cout << secret(5, -4) << endl;
}

int secret(int m, int n)
{
    int temp = 0;

    for (int i = 1; i < abs(n); i++)
        temp = temp + i * m;
    
    return temp;
}