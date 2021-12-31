#include <iostream>

using namespace std;

int main()
{
    int x[] = {1, 2, 3, 6, 5}, max; // size: 5

    max = x[0]; // Assume the first element is the largest

    for (int i = 0; i < 5; i++)
        if (max < x[i]) max = x[i];    
    
    cout << max;
}