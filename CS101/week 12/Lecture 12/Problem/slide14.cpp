#include <iostream>

using namespace std;

int main()
{
    int inStock[10][4];
    int alpha[20];
    int beta[20];
    int gamma[4] = {11, 13, 15, 17};
    int delta[10] = {3, 5, 2, 6, 10, 9, 7, 11, 1, 8};

    // Prompt the user to input 20 numbers and stores the numbers into alpha.
    cout << "Enter 20 numbers: ";
    for (int i = 0; i < 20; i++)
    {
        cin >> alpha[i];
    }

    // Initialize the elements of beta to two times the corresponding elements in alpha.
    for (int i = 0; i < 20; i++)
    {
        beta[i] = alpha[i] * 2;
    }
    
    // Set the elements of the first row of inStock to gamma and the remaining rows of inStock to three times the previous row of inStock
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (i == 0)
                inStock[i][j] = gamma[j];
            else 
                inStock[i][j] = 3 * inStock[i-1][j];
        }
    }
    
    // Store alpha into the first five rows of inStock and beta into the last five rows of inStock.
    for (int i = 0; i < 10; i++)
    {
        if (i < 5)
            for (int j = 0; j < 4; j++)
                inStock[i][j] = alpha[i * 4 + j];
        else
            for (int j = 0; j < 4; j++)
                inStock[i][j] = beta[(i-5) * 4 + j];
    }


    // A loop to print 2D array (For debugging)
    // for (int i = 0; i < 10; i++)
    // {
    //     for (int j = 0; j < 4; j++)
    //     {
    //         cout << "inStock[" << i << "][" << j << "]: " << inStock[i][j] << endl;
    //     }
    // }
    
    // Prompt the user to input the elements for the first column of inStock, and then set the elements in the remaining 
    // columns to two times the corresponding element in the previous column, minus the corresponding element in delta.
    for (int j = 0; j < 4; j++)
    {
        for (int i = 0; i < 10; i++)
        {
            if (j == 0)
                cin >> inStock[i][j];
            else 
                inStock[i][j] = 2 * inStock[i][j-1] - delta[i];
        }
    }
}