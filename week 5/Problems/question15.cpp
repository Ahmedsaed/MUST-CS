#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c;
    
    for (int j = 1; j < a; j++)
    {
        d = b + c;
        b = c;
        c = d;
        cout << c << " ";
    }
    
    cout << endl;
}
