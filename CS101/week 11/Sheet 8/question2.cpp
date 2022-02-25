#include <iostream>

using namespace std;

void printArray(const int x[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "list[" << i << "] = " << x[i] << endl;
    }    
}

int main()
{
    int list[10];
    for (int i = 0; i < 5; i++)
    {
        list[i] = i * i - 5;
        
        if (i % 3 == 0)
            list[i] = list[i] + i;
        else
            list[i] = list[i] - i;
    }

    printArray(list, 10);
}
