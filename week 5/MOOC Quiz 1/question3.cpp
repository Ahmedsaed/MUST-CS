#include <iostream>

using namespace std;

int main()
{
    int a = 5;
    int b = 10;

    if (a < 10 && b > 10) 
    {
        a = 2 * a;
        b = b / 2;
        cout << a << " " << b << " " << a - b << endl;
    }
    else 
    {
        a = b / a;
        cout << a << " " << b << " " << a * a + 2 * b << endl;
    }
}