#include <iostream>

using namespace std;

int main()
{
    cout << (5 + 6 == 3 + 7) << endl;  // false
    cout << (2 * 6 - 4 >= 9 - 1) << endl; // true
    cout << ('U' >= 't') << endl; // false
    cout << ('A' <= 'a') << endl; // true
    cout << (6.28 / 3 < 3 - 1.2) << endl; // false
}