#include <iostream >

using namespace std;

int main()
{
    int num1, num2;
    int temp = 0;

    cout << "Enter two integers: ";
    cin >> num1 >> num2;
    cout << endl ;

    do
    {
        temp = num1 + num2 ;
        num1 = num2 ;
        num2 = temp ;
        cout << temp << " ";
    }
    while (((num1 + num2) % 5) != 0);

    cout << endl;

    return 0;
}
