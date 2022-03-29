#include <iostream>

using namespace std;

int main() {
    int mat1[10][10], mat2[10][10], result[10][10];

    int row1, col1, row2, col2;

    cout << "Enter the rows and columns of the first matrix: ", cin >> row1 >> col1;
    cout << "Enter the elements of the first matrix: " << endl;
    for (int i = 0; i < row1; i++)
        for (int j = 0; j < col1; j++)
            cin >> mat1[i][j];

    cout << "Enter the rows and columns of the second matrix: ", cin >> row2 >> col2;
    cout << "Enter the elements of the second matrix: " << endl;
    for (int i = 0; i < row2; i++)
        for (int j = 0; j < col2; j++)
            cin >> mat2[i][j];

    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            int sum = 0;
            for (int k = 0; k < col1; k++)
                sum += mat1[i][k] * mat2[k][j];
            
            result[i][j] = sum;
        }
    }
    
    cout << "The output matrix: " << endl;
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col2; j++)
            cout << result[i][j] << "  ";
        cout << endl;
    }
    
    return 0;
}
