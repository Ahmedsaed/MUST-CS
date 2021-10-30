// Write an algorithm to read a given character and print “Right” if the given character is ‘r’ or ‘R’, or print “Left” if the given character is ‘l’ or ‘L’, or print “Straight” otherwise.

#include <iostream>

using namespace std;

int main()
{
    char c;

    cout << "Character: ", cin >> c;

    if (c == 'r' || c == 'R')
    {
        cout << "Right";
    }
    else if (c == 'l' || c == 'L')
    {
        cout << "Left";
    }
    else
    {
        cout << "Straight";
    }
}