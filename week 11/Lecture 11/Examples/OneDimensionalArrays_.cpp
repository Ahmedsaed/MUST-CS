// One Dimensional Arrays.cpp
#include <iostream>

using namespace std;

void add(int x[], int xSize);
void printArray(const int x[], int xSize);


int main()
{
    // declare an array of 20 intgers
    // int numbers[10];

    // initialization during declartion
    // int numbers[10] = {1};

    // int numbers[] = {1, 5, 3};

    // initialization using a loop
    // for (int i = 0; i < 10; i++)
    //     numbers[i] = 5;
    
    // assign values to elements
    // numbers[1] = 7;
    // numbers[5] = 8;

    // print values of elements
    // cout << numbers[3] << endl;
    // cout << numbers[1] << endl;
    // cout << numbers[5] << endl;

    // input array elements
    // for (int i = 0; i < 10; i++)
    //     cin >> numbers[i];

    // output array elements
    // for (int i = 0; i < 10; i++)
    //     cout << numbers[i] << " ";

    // Array out of bounds
    // cout << numbers[11];

    /* Example 1: Store 5 numbers from user, Then print these numbers and their average */
    // int values[5], sum = 0;

    // cout << "Enter 5 numbers: ";
    // for (int i = 0; i < 5; i++)
    // {
    //     cin >> values[i];
    //     sum += values[i];
    // }

    // cout << "The numbers are: ";
    // for (int i = 0; i < 5; i++)
    //     cout << values[i] << " ";

    // cout << "Average: " << (sum/5) << endl;

    /* Example 2: Print the greatest number and the smallest number out of 10 numbers */
    // int numbers[10], greatest, smallest; 
    
    // // take the input from the user
    // cout << "Enter 10 numbers: ";

    // for (int i = 0; i < 10; i++)
    // {
    //     cin >> numbers[i];
    // }

    // greatest = numbers[0]; // Assume that the greatest number is the first element in the array

    // for (int i = 1; i < 10; i++)
    // {
    //     if (greatest < numbers[i])
    //         greatest = numbers[i];
    // }

    // cout << "Greatest Element: " << greatest << endl;

    // smallest = numbers[0]; // Assume that the smallest number is the first element in the array

    // for (int i = 0; i < 10; i++)
    // {
    //     if (smallest > numbers[i])
    //         smallest = numbers[i];
    // }

    // cout << "smallest Element: " << smallest << endl;

    // Passing arrays to a function
    // int numbers[5] = {0};

    // add(numbers, 5);

    // printArray(numbers, 5);

    // Strings
    // char name[10];
    
    // cout << "Enter your name: " << endl;

    // cin >> name;

    // cout << name;
}

void add(int x[], int xSize)
{
    for (int i = 0; i < xSize; i++)
    {
        x[i]++;
    }
}

void printArray(const int x[], int xSize)
{
    for (int i = 0; i < xSize; i++)
        cout << x[i] << " ";
}

