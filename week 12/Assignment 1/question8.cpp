#include <iostream>

using namespace std;

int func(int x[], int size, int key);

int main()
{
    int y[] = {1, 2, 5, 4, 3}; // Size: 5

    cout << func(y, 5, 3); // should print 4
}

int func(int x[], int size, int key)
{
    for (int i = 0; i < size; i++)
        if (key == x[i]) return i;

    return -1;
}