#include <iostream>

using namespace std;

int main()
{
    for (int j = 0; j < 8; j++)
    {
        cout << j * 25 << " - ";
        
        if (j != 7)
            cout << (j + 1) * 25 - 1 << endl;
        else
            cout << (j + 1) * 25 << endl;
    }
}
