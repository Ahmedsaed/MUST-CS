#include <iostream>

using namespace std;

int main() {
    int x, y; 
    int count = 1; int power = 1; 

    cout << "Enter base as an integer: "; cin >> x; 
    cout << "Enter exponent as an integer: "; cin >> y; 

    // while ( count <= y ) {
    //     power *= x;
    //     count++;
    // } 

    for (; count <= y; count ++)
        power *= x;

    cout << x << " to the power " << y << " = " << power << endl; 
} 
