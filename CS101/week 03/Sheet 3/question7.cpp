#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int x, y;
    ifstream inData;
    ofstream outData;

    inData.open("input.data");
    outData.open("output.data");

    inData >> x >> y;

    outData << x + y;

    inData.close();
    outData.close();
}