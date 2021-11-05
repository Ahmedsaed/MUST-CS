#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str1 = "English", str2 = "Computer Science", str3 = "Programming";

    cout << (str1 >= str2) << endl; // true
    cout << (str1 != "english") << endl; // true
    cout << (str3 < str2) << endl; // false
    cout << (str2 >= "Chemistry") << endl; // true
}