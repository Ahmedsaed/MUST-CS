#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d, e;

    a = 3;
    b = 4;
    c = (a % b) * 6;
    d = c / b;
    e = (a + b + c + d) / 4;

    cout << e << endl; 
}