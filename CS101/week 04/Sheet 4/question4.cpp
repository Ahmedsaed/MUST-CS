#include <iostream>

using namespace std;

int main()
{
    int x = 3, y = 4, z = 7, w = 1;

    cout << "x == y: " << (x == y) << endl; // false
    cout << "x != z: " << (x != z) << endl; // true
    cout << "y == z - 3: " << (y == z - 3) << endl; // true
    cout << "!(z > w): " << !(z > w) << endl; // false
    cout << "x + y < z: " << (x + y < z) << endl; // false
}