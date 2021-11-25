#include <iostream>

using namespace std;

int main()
{
    int sum = 0; 
    int count = 1; 

    // while ( count <= 10 ) {
    //     sum += count; 
    //     count++; 
    // }

    for (; count <= 10; count++)
    {
        sum += count;
    }

    cout << "The sum is: " << sum << endl;
}
