#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
    ifstream inFile;
    ofstream outFile;

    float length, width, radius, balance, interest;
    int age;
    string firstName, lastName;
    char ch;

    inFile.open("inData.txt");
    outFile.open("outData.txt");

    inFile >> length >> width >> radius >> firstName >> lastName >> age >> balance >> interest >> ch;

    outFile << fixed << setprecision(2);

    outFile << "Rectangle:\n";
    outFile << "Length = " << length << ", width = " << width << ", area = " << length * width << ", parameter = " << 2 * (length + width) << endl << endl;
    
    outFile << "Circle:\n";
    outFile << "Radius = " << radius << ", area = " << 3.1416 * radius * radius << ", circumference = " << 2 * 3.1416 * radius << endl << endl;

    outFile << "Name: " << firstName << " " << lastName << ", age: " << age << endl;
    outFile << "Beginning balance = $" << balance << ", interest rate = " << interest << endl;
    outFile << "Balance at the end of the month = $" << balance + (balance * interest / 100 / 12); 

}