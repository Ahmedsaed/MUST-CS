#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int temp = 0;
    
    for (int counter = 1; counter <= 100; counter++)
        if (pow(floor(sqrt(counter / 1.0)), 2.0) == counter)
            temp = temp + counter;
    
    cout << temp << endl;
    
    return 0;
}