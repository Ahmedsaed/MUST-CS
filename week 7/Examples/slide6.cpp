#include <iostream>

using namespace std;

int main()
{
    int sum = 0;
    // int number; 
    
    int number = 2;

    // for (number = 2; number <= 20; number += 2 )
    //     sum += number; 
    
    while (number <= 20)
    {
        sum += number;
        number += 2;
    }

    cout << "Sum is " << sum << endl; 
} 
