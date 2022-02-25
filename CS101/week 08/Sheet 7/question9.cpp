#include <iostream>

using namespace std;

int mystery(int num);

int main()
{
    cout << mystery(6) << endl;
    cout << mystery(0) << endl;
    cout << mystery(-5) << endl;
    cout << mystery(10) << endl;
}

int mystery(int num)
{
    int y = 1;
    
    if (num == 0)
        return 1;
    else if (num < 0)
        return -1;
    else
        for (int count = 1; count < num; count++)
            y = y * (num - count);
    
    return y;
}