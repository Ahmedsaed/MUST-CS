#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int x;

    ifstream inData;

    inData.open("inData.txt");

    while(inData)
    {
        inData >> x;
        cout << x << endl;
    }
}