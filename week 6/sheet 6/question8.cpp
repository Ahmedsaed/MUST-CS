#include <iostream>

using namespace std;

int main()
{
    int total = 0, count = 0, number;
    
    cin >> number;
    while (number != -1)
    {
        total = total + number;
        count++;
        cin >> number;
    }

    cout << "The number of data read is " << count << endl;
    cout << "The sum of the numbers entered is " << total << endl;

    return 0;
}