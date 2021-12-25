#include <iostream>
#include <cmath>
#include <cctype>
#include <iomanip>

using namespace std;

int main()
{
    double firstNum, secondNum;
    cout << fixed << showpoint << setprecision (2) << endl;
    cout <<"Uppercase a is "<< static_cast<char>(toupper('a')) << endl;
    cout << "3 to the power 4 = " << pow(3, 4) << endl;
    cout << "Enter two decimal numbers: ";
    cin >> firstNum >> secondNum; 
    cout << endl;
    cout << firstNum << " to the power of " << secondNum
    << " = " << pow(firstNum, secondNum) << endl;
    cout << "Absolute value of -32 = " << abs(-32) << endl;
    cout << "Square root of 28.00 = " << sqrt(28.00) << endl;
    return 0;

}