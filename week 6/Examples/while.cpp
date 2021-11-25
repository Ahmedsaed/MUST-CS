#include <iostream>

using namespace std;

int main()
{
    // ---------------- Counter-Controlled while Loops ----------------

    // int counter, sum; 
    // counter = 1; 
    // sum = 0; 

    // while ( counter < 100) 
    // {
    //     sum = sum + counter; 
    //     counter++; 
    // } 
    
    // cout << "The sum is " << sum << endl;

    // ---------------- Sentinel-Controlled while Loops ----------------

    // char answer;

    // cout << "Will you marry me?";

    // while (answer != 'N' && answer != 'Y')
    // {
    //     cin >> answer;
    // }

    // cout << "She said " << ((answer == 'Y') ? "Yes" : "No");

    // ---------------- Flag-Controlled while Loops ----------------

    bool secure = false;
    int passcode = 0;

    while (secure != true)
    {
        cout << "Please Enter Your Passcode ?";
        cin >> passcode;

        if (passcode == 1234)
        {
            secure = true;  
        }
    }
}