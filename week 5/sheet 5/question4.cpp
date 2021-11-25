#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int num = 0;
    int sum;
    int count = 0;

    cin >> sum;
    
    while (count < 3)
    {
        cin >> num;
        sum = sum + num;
        count++;
    }
    
    cout << "Sum = " << sum << endl;
}