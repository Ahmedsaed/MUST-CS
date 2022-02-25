#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int tmp;
    ofstream outFile;

    outFile.open("numbers.txt");

    cout << "Enter 3 numbers: ";
    for (int i = 0; i < 3; i++)
    {
        cin >> tmp;
        outFile << tmp << endl;
    }

    outFile.close();
}