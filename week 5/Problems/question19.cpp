#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n = 0, sum = 0;

    cout << "Number: ", cin >> n;

    int length = trunc(log10(n)) + 1;
    
    for (int i = 0; i < length; i++)
    {
        cout << n%10, cout << "\n";
        sum += n%10;

        n = n/10;
    }

    cout << sum;
}
