/*
Suppose that x and y are int variables, z is a double variable, and 
ch is a char variable. Suppose the input statement is:
cin >> x >> y >> ch >> z;
*/

#include <iostream>

using namespace std;

int main()
{
    int x, y;
    double z;
    char ch;

    cin >> x >> y >> ch >> z;
    cout << x << endl << y << endl << ch << endl << z;
}