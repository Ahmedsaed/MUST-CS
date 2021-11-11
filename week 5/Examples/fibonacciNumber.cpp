#include <iostream>

using namespace std;

int main()
{
    int previous1; // 1st Fibonacci number
    int previous2; // 2nd Fibonacci number
    int current; // Current Fibonacci number
    int nthFibonacci; // Position of the desired Fibonacci number
    int counter = 0; // Loop control variable

    //  Get the first two Fibonacci numbers.
    cout << "Enter first two Fibonacci numbers? ";
    cin >> previous1 >> previous2;

    //  Get the position, n, of the desired Fibonacci number
    cout << "Enter desired Fibonacci number? ";
    cin >> nthFibonacci;

    while (counter < nthFibonacci - 2)
    {
        current = previous1 + previous2;
        
        previous1 = previous2;
        previous2 = current;
        counter++;
    }

    cout << current;
}