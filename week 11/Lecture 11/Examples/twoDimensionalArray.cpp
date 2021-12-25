// two Dimensional Arrays.cpp
#include <iostream>

using namespace std;

int main()
{
    // declartion 
    // int n[2];
    // int numbers[2][3];

    // // initialization
    // int n[2] = {2, 3};
    // int numbers[3][3] = {{2, 4, 5}, 
    //                      {9, 0, 19},
    //                      {1, 2, 8}};

    // // assign 
    // n[0] = 5;
    // n[1] = 4;
    // numbers[0][0] = 8;
    // numbers[0][1] = 5;
    // numbers[0][2] = 4;
    // numbers[1][2] = 9;
    // numbers[1][1] = 7;
    // numbers[2][2] = 45;
    // numbers[2][0] = 14;

    /*
        {{1 , 5, 8}, 
         {4 , 7, 3}}
    */

    // Input/Output 2d array elements
    int numbers[2][3];

    cout << "Enter 6 numbers: " << endl;

    // Storing user input in the array
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 3; ++j) {
            cin >> numbers[i][j];
        }
    }

    cout << "The numbers are: " << endl;

    //  Printing array elements
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << numbers[i][j] << endl;
        }
    }
}