// lecture 2

#include <iostream>
#include <string>

using namespace std;

int main()
{
    /* type conversion:

        static_cast<int>(7.8 + 15/2) evaluated to 14
        static_cast<double>(15)/2 evaluated to 7.5
    */
   
   /* Increment
        Pre-increment: ++variable
        Post-increment: variable++
   */

    cout << "New line" << endl;

     
    int feet;           //holds given feet
    int inches;         //holds given inch
    int totalInches;    //holds total inches
    double centimeters; // holds length in centimeters

    const double centimetersPerInch = 2.54;
    const int inchesPerFoot = 12;

    cout << "Feet: ", cin >> feet, cout << "Inches: ", cin >> inches;

    totalInches = feet * inchesPerFoot + inches;

    cout << "Centimeters: " << centimetersPerInch * totalInches << endl;
}