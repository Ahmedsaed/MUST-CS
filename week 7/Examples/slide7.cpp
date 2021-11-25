#include <iostream>
#include <iomanip>
#include <cmath> 

using namespace std;

int main() {
    double amount; double rate = .05; 
    
    cout << "Year" << setw( 21 ) << "Amount on deposit" << endl;
    cout << fixed << setprecision( 2 );
    
    // for ( int year = 1; year <= 10; year++ ) {
    //     amount = 1000 * pow( 1.0 + rate, year );
    //     cout << setw( 4 ) << year << setw( 21 ) << amount << endl;
    // } 

    int year = 1;
    while (year <= 10)
    {
        amount = 1000 * pow( 1.0 + rate, year );
        cout << setw( 4 ) << year << setw( 21 ) << amount << endl;
        year++;
    }
    
}