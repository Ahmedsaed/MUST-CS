#include <iostream>

using namespace std;

int main()
{
    int tmp, sum = 0;

    cout << "Please, Enter 10 numbers: ";

    for (int i = 0; i < 10; i++)
    {
        cin >> tmp;
        sum += tmp;
    }
    
    cout << "Sum: " << sum;
}