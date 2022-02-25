#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int num1;
    int num2;
    
    cout << "Enter two integers: ";
    cin >> num1 >> num2;
    cout << endl;
    
    if (num1 != 0 && num2 != 0)
        cout << sqrt(fabs(num1 + num2 + 0.0)) << endl;
    else if (num1 != 0)
        cout << floor(num1 + 0.0) << endl;
    else if (num2 != 0)
        cout << ceil(num2 + 0.0) << endl;
    else
        cout << 0 << endl;
}