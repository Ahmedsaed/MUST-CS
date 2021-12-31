/*
    Write a C++ program that asks the user to enter a student’s score then prints “passed”
    if the student’s score is greater than or equal 60 otherwise prints “failed”.
    The program repeats the mentioned process as long as the user enters a score that is different from -1. 
*/

#include <iostream>

using namespace std;

int main()
{
    int score = 0;

    cout << "Student Score: ", cin >> score;

    while (score != -1)
    {
        cout << ((score >= 60) ? "passed" : "failed") << endl;
        cout << "Student Score: ", cin >> score;
    }
}