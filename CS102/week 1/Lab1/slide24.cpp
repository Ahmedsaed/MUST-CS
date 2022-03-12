/*
In slide 24 in Lap 1,
The required fromat should look like this:

    Enter a number: 3
    10 -> 100
    3 -> 9
    6 -> 36

however to achieve this format. we need to use some functions that's outside of the scope of the course material
But, I managed to solve this function using this code and I have added some comments to make it easier to understand
*/


#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <string>

using namespace std;

// Function prototypes 
string getword();


int main() {
    int n, x;
    cout << "Enter a number: ", cin >> n; // Read n, the number of iterations

    for (int i = 0; i < n; i++) {
        x = stoi(getword()); // get the value in the form of a string then convert it to int (using stoi() function)
        cout << "-> " << x * x << endl; // print the square of x
    }
}


// This function listens to the keyboard keystrokes and saves them in a string until it reads a blank space
string getword() {
    string word;

    // read each keystroke (note that this behaviour is diffrent from cin)
    // _getch() function reads the value only, it doesn't print it to standard output. you have to do it manually 
    char c = _getch(); 

    // If the character is not a space
    while (!isspace(c)) 
    {
        // Append the character to word
        word.push_back(c); 
        // And print it to standard output
        cout << c; 
        // read the next character
        c = _getch(); 
    }

    cout << c; // Print the last character which should be a space
    return word;
}
