/*
o Write C++ statements that include the header files iostream.
o Write a C++ statement that allows you to use cin, cout, and endl without the prefix std::.
o Write C++ statements that declare the following variables: n1, n2, n3, and average of type int.
o Write C++ statements that store 125 into n1, 28 into n2, and -25 into n3.
o Write a C++ statement that stores the average of n1, n2, and n3, into average.
o Write C++ statements that output the values of n1, n2, n3, and average.
*/

#include <iostream>

using namespace std;

int main()
{
    int n1, n2, n3, average;
    
    n1 = 125;
    n2 = 28;
    n3 = -25;

    average = (n1 + n2 + n3) / 3;

    cout << "n1: " << n1 << endl << "n2: " << n2 << endl << "n3: " << n3 << endl << "Average: " << average << endl;
}
