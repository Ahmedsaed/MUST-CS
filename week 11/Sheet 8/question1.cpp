#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double temp[5];
    
    for (int i = 0; i < 5; i++)
        temp[i] = pow(i, 2.0) + 2;
    
    for (int i = 0; i < 5; i++)
        cout << temp[i] << " ";
    cout << endl;
    
    temp[0] = pow(temp[1], 3);
    temp[1] = temp[4] - temp[2];
    temp[2] = temp[0] - 5;
    
    for (int i = 0; i < 5; i++)
        cout << temp[i] << " ";
    
    cout << endl;
}