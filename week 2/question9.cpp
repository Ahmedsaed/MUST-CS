/*
What is printed by the following program? Suppose the input is:
Miller
34
340
*/

#include <iostream>
#include <string>

using namespace std;

const int PRIME_NUM = 11;

int main()
{
    const int SECRET = 17;

    string name;
    int id;
    int num;
    int mysteryNum;

    cout << "Enter last name: ";
    cin >> name; // name = "Miller"

    cout << endl;
    cout << "Enter a two digit number: ";
    cin >> num; // num = 34
    
    cout << endl;
    id = 100 * num + SECRET; // id = 3400 + 17 = 3417
    
    cout << "Enter a positive integer less than 1000: ";
    cin >> num; // 340

    cout << endl;
    mysteryNum = num * PRIME_NUM - 3 * SECRET; // mystreyNum = 340 * 11 - 3 * 17 = 3689

    cout << "Name: " << name << endl;
    cout << "Id: " << id << endl;
    cout << "Mystery number: " << mysteryNum << endl;

    return 0;
}