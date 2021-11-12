#include <iostream>

using namespace std;

int main()
{
    int i;

    for (i = 1; i <= 1; i++) // *
        cout << "*";
    cout << endl;
    
    for (i = 2; i >= 1; i++) // infinite loop
        cout << "*";
    cout << endl;
    
    for (i = 1; i <= 1; i--) // infinite loop
        cout << "*";
    cout << endl;
    
    for (i = 12; i >= 9; i--) // ****
        cout << "*";
    cout << endl;
    
    for (i = 0; i <= 5; i++) // ******
        cout << "*";
    cout << endl;
    
    for (i = 1; i <= 5; i++) // ***
    {
        cout << "*";
        i = i + 1;
    }
    cout << endl;
}
