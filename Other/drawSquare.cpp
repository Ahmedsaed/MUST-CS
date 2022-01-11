#include <iostream>

using namespace std;

int main()
{
    int dim = 5;
    for (int x = 1; x <= dim; x++)
    {
        for (int j = 1; j <= dim; j++)
        {
            if (x == 1 || x == dim || j == 1 || j == dim)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
}