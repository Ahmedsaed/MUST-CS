#include <iostream>

using namespace std;

int main()
{
    int limit = 4;
    int first = 5;
    int j;

    for (j = 1; j <= limit; j++)
    {
        cout << first * j << endl;
        first = first + (j - 1);
    }
    
    cout << endl;

    // while loop
    j = 1;
    limit = 4;
    first = 5;

    while (j <= limit)
    {
        cout << first * j << endl;
        first = first + (j - 1);
        j++;
    }

    cout << endl;
    
    //do while loop
    j = 1;
    limit = 4;
    first = 5;

    do
    {
        cout << first * j << endl;
        first = first + (j - 1);
        j++;
    } while (j <= limit);

    cout << endl;   
}