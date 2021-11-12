#include <iostream>

using namespace std;

int main()
{
    int i = 0, value = 0;
    
    while (i <= 20) // 21 iterations
    {
        if (i % 2 == 0 && i <= 10) // even and less than or equal to 10
            value = value + i * i;
        else if (i % 2 == 0 && i > 10) // even and greater than 10
            value = value + i;
        else
            value = value - i; // odd
        
        i = i + 1;
    }
    
    cout << "value = " << value << endl;
}
