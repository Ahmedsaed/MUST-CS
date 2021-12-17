#include <iostream>

using namespace std;

int main()
{
    int n;

    do
    {
        cout << "Enter a positive Number? ", cin >> n;

    } while (n <= 0);
    
    cout << "You Entered " << n;
}