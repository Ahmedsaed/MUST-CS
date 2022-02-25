#include <iostream>

using namespace std;

void printArray(const double x[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "myList[" << i << "] = " << x[i] << endl;
    }    
}

int main()
{
    double myList[5];
    
    myList[0] = 3.0;
    myList[1] = 4.0;
    
    for (int i = 2; i < 5; i++)
    {
        myList[i] = myList[i - 1] * myList[i - 2];
        
        if (i > 3)
            myList[i] = myList[i] / 4;
    }

    printArray(myList, 5);
}