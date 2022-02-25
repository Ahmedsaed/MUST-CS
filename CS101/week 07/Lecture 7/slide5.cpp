#include <iostream>

using namespace std;

int main()
{
    int passes = 0; int failures = 0; 
    int studentCounter = 1; 
    int result;
    
    // while ( studentCounter <= 10 ) {
    //     cout << "Enter result (1 = pass, 2 = fail): "; cin >> result; 
    //     if ( result == 1 ) 
    //         passes = passes + 1; 
    //     else 
    //         failures = failures + 1; 
    //         studentCounter++; 
    // } 

    for (; studentCounter <= 10; studentCounter++)
    {
        cout << "Enter result (1 = pass, 2 = fail): "; cin >> result; 
        if ( result == 1 ) 
            passes = passes + 1; 
        else 
            failures = failures + 1;
    }
    
    cout << "Passed " << passes << "\nFailed " << failures << endl;
}   