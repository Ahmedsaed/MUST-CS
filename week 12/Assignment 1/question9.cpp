#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream outFile;

    outFile.open("demo.txt");

    outFile << "name1" << endl
            << "name2" << endl
            << "name3" << endl
            << "name4";

    outFile.close();
}