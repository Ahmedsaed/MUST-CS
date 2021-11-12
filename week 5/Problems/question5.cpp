#include <iostream>

using namespace std;

int main()
{
    int num;
    int sum;

    cin >> sum;
    
    num = sum;
    
    while (num != -1)
    {
        cin >> num;
        sum = sum + num;
    }
    
    cout << "Sum = " << sum << endl;
}