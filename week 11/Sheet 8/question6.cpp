#include <iostream>

using namespace std;

int smallestIndex(int x[], int size);

int main()
{
    int list[] = {8, 2, 3, 4, 5, 6, 7, 1, 9};  

    cout << smallestIndex(list, 8); // 7
}

int smallestIndex(int x[], int size)
{   
    int index = 0;

    for (int i = 0; i < size; i++)
    {
        if (x[index] > x[i])
            index = i;
    }

    return index;
}