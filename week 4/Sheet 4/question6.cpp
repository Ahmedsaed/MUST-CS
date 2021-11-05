#include <iostream>

using namespace std;

int main()
{
    int x;
    int a = 265;

    cout << (x = 25) << endl; // 25
    cout << (x == 90) << endl; // false
    cout << (x > 10) << endl; // true
    cout << (3 * x < a) << endl; // true
    cout << (10 * x == a - 15) << endl; // true

}