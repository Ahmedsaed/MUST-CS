#include <iostream>

using namespace std;

int main()
{
    int myNum = 10;
    int yourNum = 30;
    
    if (yourNum % myNum == 3) // this condition evaluates to false
    {
        yourNum = 3;
        myNum = 1;
    }
    else if (yourNum % myNum == 2) // this condition evaluates to false
    {
        yourNum = 2;
        myNum = 2;
    }
    else
    {
        yourNum = 1;
        myNum = 3;
    }

    cout << myNum << " " << yourNum << endl; // 3 1
}