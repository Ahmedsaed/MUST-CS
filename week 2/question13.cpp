/*
Write a C++ program that prompts the user to input the elapsed time for an event in hours, minutes, and 
seconds. The program then outputs the elapsed time in seconds.
*/

#include <iostream>

using namespace std;

int main()
{
    int h, m, s;

    cout << "Hours: ", cin >> h;
    cout << "Minutes: ", cin >> m;
    cout << "Seconds: ", cin >> s;

    cout << "Total time in seconds: " << h * 60 * 60 + m * 60 + s;

}