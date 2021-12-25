#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int num;

    cin >> num;

    if (num >= 0)
        switch (num)
        {
        case 0:
            num = static_cast<int>(pow(num, 3.0));
            break;
        case 2:
            num = ++num;
            break;
        case 4:
            num = num - 4;
            break;
        case 5:
            num = num * 4;
        case 6:
            num = num / 6;
            break;
        case 10:
            num--;
            break;
        default:
            num = -20;
        }
    else
        num = num + 10;
 
    cout << num;
}