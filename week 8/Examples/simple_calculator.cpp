#include <iostream>

using namespace std;

void printUsage();
int add(int, int);
int sub(int, int);
int division(int, int);
int multi(int, int);
int pow(int, int);


int main()
{
    printUsage();

    int x, y;
    char op;

    cin >> x >> op >> y;

    if (op == '+')
    {
        cout << add(x, y);
    }
    else if (op == '-')
    {
        cout << sub(x, y);
    }
    else if (op == '/')
    {
        cout << division(x, y);
    }
    else if (op == '*')
    {
        cout << multi(x, y);
    }
    else if (op == '^')
    {
        cout << pow(x, y);
    }

}

void printUsage()
{
    cout << "Usage:" << endl;
    cout << '\t' << "X + Y" << endl;
    cout << '\t' << "X - Y" << endl;
    cout << '\t' << "X / Y" << endl;
    cout << '\t' << "X * Y" << endl;
    cout << '\t' << "X ^ Y" << endl;
}

int add(int a, int b)
{
    return a + b;
}

int sub(int a, int b)
{
    return a - b;
}

int division(int a, int b)
{
    return a / b;
}

int multi(int a, int b)
{
    return a * b;
}

int pow(int a, int b)
{
    int value = 1;

    for (int i = 0; i < b; i++)
    {
        value *= a;
    }

    return value;
}

