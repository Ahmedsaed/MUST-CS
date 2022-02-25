#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream inFile;
    ofstream outFile;

    inFile.open("input.dat");
    outFile.open("output.dat");

    int x, y;
    inFile >> x >> y;
    outFile << x + y;

    inFile.close();
    outFile.close();
}