#include <iostream>

using namespace std;

int main()
{
    int limit = 0;
    cin >> limit;

    for (int i = 1; i < limit; i++)
    {
        if (i % 15 == 0)
            cout << "FizzBuzz" << '\t';
        else if (i % 3 == 0)
            cout << "Fizz" << '\t';
        else if (i % 5 == 0)
            cout << "Buzz" << '\t';
        else
            cout << i << '\t';
    }
}