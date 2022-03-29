#include <iostream>
#include <string>

using namespace std;

bool IsPrime(int n)
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
	    string n;
	    cout << "Enter the number: ", cin >> n;

        reverse(n.begin(), n.end());

        cout << boolalpha;
        cout << n << " is emirp: " << IsPrime(stoi(n)) << endl;
    }
}