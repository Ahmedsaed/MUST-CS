#include <iostream>

using namespace std;

int main()
{
    int beta[3][3];
    int i, j;

    // a
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            beta[i][j] = 0;

    /*
        0 0 0
        0 0 0 
        0 0 0
    */

    // A function to print the array
    cout << "A: " << endl;
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            cout << "beta[" << i << "][" << j << "]: " << beta[i][j] << endl;

    // b
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            beta[i][j] = i + j;

    /*
        0 1 2
        1 2 3
        2 3 4
    */

    // A function to print the array
    cout << "B: " << endl;
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            cout << "beta[" << i << "][" << j << "]: " << beta[i][j] << endl;

    // c
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            beta[i][j] = 2 * (i + j) % 4;

    /*
        0 2 0
        2 0 2
        0 2 0
    */

    // A function to print the array
    cout << "C: " << endl;
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            cout << "beta[" << i << "][" << j << "]: " << beta[i][j] << endl;

    // Another way of printing the array
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            cout << beta[i][j] << " ";
        
        cout << endl;
    }
}