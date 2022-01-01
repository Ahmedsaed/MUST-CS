// Happy New Year
// this script is designed to work in windows only.

#include <iostream>
#include <Windows.h>
#include <cstdlib>

using namespace std;

int main()
{
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    int columns, lock = 0;

    GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi);
    columns = csbi.srWindow.Right - csbi.srWindow.Left + 1;

    while (true)
    {
        Sleep(500); // 0.5 sec
        for (int i = 1; i <= columns; i++)
        {
            if (i < (columns - 14) && i == (rand() % columns) && lock++ == 0 && (rand() % 3) == 1)
            {
                cout << "Happy New Year";
                i += 13;
            }
            else
                cout << ((i % (rand() % columns + 1) == 0 && (rand() % 2) == 1) ? '*' : ' ');
        }
        lock = 0;
    }
}