// A program to calculate the average of 5 test scores.

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
    string studentName;
    double test1, test2, test3, test4, test5;
    double average;

    ifstream inData;
    ofstream outData;

    inData.open("test.dat");
    outData.open("testavg.out");

    getline(inData, studentName);
    inData >> test1 >> test2 >> test3 >> test4 >> test5;

    outData << fixed << setprecision(2);

    outData << "Student Name: " << studentName << endl;
    outData << "Test scores: " << test1 << " " << test2 << " " << test3 << " " << test4 << " " << test5 << endl;
    
    average = (test1 + test2 + test3 + test4 + test5) / 5;
    outData << "Average test score: " << average;

    inData.close();
    outData.close();
}