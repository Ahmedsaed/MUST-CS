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
    
    list[0] = 2;
    list[1] = 3;
    
    for (int i = 2; i < 10; i++) 
    {
        list[i] = list[i - 1] + list[i - 2];
        
        if (i > 7)
            list[i] = 2 * list[i] - list[i - 2];
    }

    printArray(list, 10);
}