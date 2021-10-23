/*
Write a C++ program that prompts the user to input the elapsed time for an event in seconds. The 
program then outputs the elapsed time in hours, minutes, and seconds. (For example, if the elapsed time 
is 9630 seconds, then the output is 2:40:30.)
*/

#include <iostream>

using namespace std;

int main()
{
    int t;

    cout << "Time in seconds: ", cin >> t;

    // C++ doesn't initialize values to zero automatically
    int h = 0, m = 0, s = 0;

    do
    {
        if (t - 3600 > 0)
        {
            h++;
            t -= 3600;
        }
        else if (t - 60 > 0)
        {
            m++;
            t -= 60;
        }
        else
        {
            s = t;
            t = 0;
        }
    } while (t != 0);
    
    cout << h << ":" << m << ":" << s << endl;
}