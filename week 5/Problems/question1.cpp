#include <iostream>

using namespace std;

int main()
{
    int i = 0;
    int temp = 1;

    while (i < 5)
    { 
        i = i + 1;
        temp = temp * i;
    }
    
    cout << "i = " << i << " and temp = " << temp << endl;
}