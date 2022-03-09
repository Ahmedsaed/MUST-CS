#include <iostream>

using namespace std;

int main() {

    // Normal for loop
    for (int i = 0; i < 10; i++)
        cout << "Hello World" << endl;
    cout << endl;
    
    // Change Condition
    for (int i = 0; i != 10; i++)
        cout << "Hello World" << endl;
    cout << endl;

    // Increment i in the condition 
    for (int i = 0; i++ < 10; )
        cout << "Hello World" << endl;
    cout << endl;

    // move the output statement to the for loop update statement
    for (int i = 0; i++ < 10; cout << "Hello World" << endl);
}