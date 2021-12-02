#include <iostream>
#include <cmath>
#include <cctype>
#include <cstdlib>

using namespace std;

int main()
{
    // cstdlib
    // cout << abs(-5) << endl;
    // cout << fabs(-5.5) << endl;

    // cmath
    // cout << ceil(5.6) << endl;
    // cout << ceil(-5.6) << endl;

    // cout << floor(5.6) << endl;
    // cout << floor(-5.6) << endl;

    // cout << round(5.6) << endl;
    // cout << round(5.4) << endl;
    // cout << round(-5.6) << endl;
    // cout << round(-5.4) << endl;
    
    // cout << exp(2) << endl;

    // cout << pow(2, 3) << endl;

    // cctype
    char ch;
    
    cout << (ch = tolower('D')) << endl;
    cout << (ch = tolower('d')) << endl;
    
    cout << (ch = toupper('A')) << endl;
    cout << (ch = toupper('a')) << endl;
}