#include <iostream>

using namespace std;

int main()
{
    int x = 10, y = 15, z = 20;

    cout << (!(x > 10)) << endl; // true
    cout << (x <= 5 || y < 15) << endl; // false
    cout << ((x != 5) && (y != z)) << endl; // true
    cout << (x >= z || (x + y >= z)) << endl; // true
    cout << ((x <= y - 2) && (y >= z) || (z - 2 != 20)) << endl; // true

}