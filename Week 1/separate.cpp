// Write an algorithm to read a given three-digit integer, separate the integer into its digits, and print each of these digits on a separate line

#include <iostream>
#include<cmath>

using namespace std;

int main() 
{
    int n;

    cout << "Number: ", cin >> n;

    int length = trunc(log10(n)) + 1;
    
    for (int i = 0; i < length; i++)
    {
        cout << n%10, cout << "\n";
        n = n/10;
    }
}