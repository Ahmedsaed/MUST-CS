#include <iostream>

using namespace std;

int main()
{
    int num;
    int sum = 0;

    cin >> num;

    while (num != 0)
    {
        if (num > 0) // even
            sum = sum + num; // add even numbers to sum
        else // odd
            sum = sum - num; // subtract odd numbers from sum

        cin >> num;
    }

    cout << "Sum = " << sum << endl;
}