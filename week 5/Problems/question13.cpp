#include <iostream>

using namespace std;

int main()
{
    int s = 0;
    int i;

    for (i = 0; i < 5; i++)
    {
        s = 2 * s + i;
        cout << s << " ";
    }
    
    cout << endl;
}
