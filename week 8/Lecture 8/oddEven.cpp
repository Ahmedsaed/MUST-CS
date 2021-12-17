#include <iostream>

using namespace std;

void initialize(int&, int&);
int getNumber();
int classifyNumber(int a);
void printResults(int odds, int evens);

int main()
{
    int odds, evens;
    initialize(odds, evens);

    for (int i = 0; i < 5; i++)
    {
        int n = getNumber();

        if (classifyNumber(n))
        {
            odds++;
        }
        else
        {
            evens++;
        }
    }

    printResults(odds, evens);
}

void initialize(int& a, int& b)
{
    a = 0;
    b = 0;
}

int getNumber()
{
    int num;
    cin >> num;

    return num;
}

int classifyNumber(int a)
{
    if (a % 2 == 0)
        return 0;
    else
        return 1;
}

void printResults(int odds, int evens)
{
    cout << "Odds: " << odds << endl;
    cout << "Evens: " << evens << endl;
}