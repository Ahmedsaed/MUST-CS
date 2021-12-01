#include <iostream>

using namespace std;

int main()
{
    int total = 0, count = 0, number = 0;

    do
    {
        if (number == -1)
            break;

        cin >> number;
        total = total + number;
        count++;
    } while (number != -1);


    // another solution
    
    // do
    // {
    //     total = total + number;
    //     count++;
    //     cin >> number;
    // } while (number != -1);
    

    cout << "The number of data read is " << count << endl;
    cout << "The sum of the numbers entered is " << total << endl;

    return 0;
}