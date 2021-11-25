#include <iostream>

using namespace std;

int main()
{
    int num;
    cin >> num;
    
    while (num != -999)
    {
        cout << num % 25 << " ";
        cin >> num;
    }
    
    cout << endl;
    return 0;
}
