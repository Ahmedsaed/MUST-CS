#include <iostream>

using namespace std;

int main()
{
    int count = 1;
    while (count++ <= 5)
        cout << count * (count - 2) << " ";
    cout << endl;
}
