#include <iostream>

using namespace std; 

int main()
{
    double alpha[50];

    for (int i = 0; i < 25; i++)
    {
        alpha[i] = i * i;
    }

    for (int i = 25; i < 50; i++)
    {
        alpha[i] = 3 * i;
    }

    for (int i = 0; i < 50; i++)
    {
        if (i % 10 == 0)
            cout << endl;
        
        cout << alpha[i] << " ";
    }

    /* // does the same as the above for loop but slightly more complicated 
    for (int i = 0; i < 50;)
    {
        for (int n = i + 10; i < n; i++)
            cout << alpha[i] << " ";
        cout << endl;
    }
    */
}
