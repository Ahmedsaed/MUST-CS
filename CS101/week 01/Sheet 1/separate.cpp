// Write an algorithm to read a given three-digit integer, separate the integer into its digits, and print each of these digits on a separate line

#include <iostream>
#include<cmath>

using namespace std;

int main() 
{
    int n;

    cout << "Number: ", cin >> n;

    cout << n%10, cout << "\n";
    n = n/10;

    cout << n%10, cout << "\n";
    n = n/10;

    cout << n%10, cout << "\n";
    n = n/10;

    /* Advanced answer, that works with any number
    int n;

    cout << "Number: ", cin >> n;
    
    while (n != 0)
    {
        cout << n%10 << "\n";
        n = n/10;
    }
    */
}
