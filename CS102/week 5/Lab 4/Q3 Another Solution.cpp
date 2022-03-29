#include <iostream>
#include <string>

using namespace std;

bool IsEmirp(int n)
{
    if (n == 2 || n == 3)
        return true;

    if (n <= 1 || n % 2 == 0 || n % 3 == 0)
        return false;

    for (int i = 5; i * i <= n; i += 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }

    return true;
}


int main()
{
    for (int i = 0; i < 3; i++)
    {
	    int n, tmp, reversed_number = 0, digit = 0;
	    cout << "Enter the number: ", cin >> n;


        tmp = n;
        while (n > 0)
        {
            digit = n % 10;
            n /= 10;
            reversed_number = reversed_number * 10 + digit;
        }

        cout << boolalpha;
        cout << tmp << " is emirp: " << IsEmirp(reversed_number) << endl;
    }
}
