// What is printed by the following program? Suppose the input is: 20 15

#include <iostream>

using namespace std;

const int NUM = 10;
const double X = 20.5;

int main()
{
    int a, b;
    double z;
    char grade;

    a = 25; // a = 25
    
    cout << "a = " << a << endl << "Enter two integers: ";
    
    cin >> a >> b; // a = 20, b = 15

    cout << endl << "The numbers you entered are " << a << " and " << b << endl;
    
    z = X + 2 * a - b; // z = 20.5 + 40 - 15 = 45.5

    cout << "z = " << z << endl;

    grade = 'A';

    cout << "Your grade is " << grade << endl;

    a = 2 * NUM + z; // a = 20 + 45 = 65

    cout << "The value of a = " << a << endl;

    return 0;
}
