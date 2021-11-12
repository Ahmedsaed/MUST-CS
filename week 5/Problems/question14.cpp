#include <iostream>

using namespace std;

int main()
{
    int num = 0;
    int count;
    int y = 0;

    for (count = 1; count <= 5; ++count)
    {
        num = 3 * (count - 1) + (y - count);
        cout << num << " ";
    }

    cout << count << " " << endl;
}
