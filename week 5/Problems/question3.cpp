#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int num = 1;

    while (num * num < 30)
    { 
        cout << num << " ";
        num = num + 1;
    }   
    
    cout << endl;
}