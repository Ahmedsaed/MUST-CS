#include <iostream>
#include <string>

using namespace std;

int main()
{
    int age;
    char ch;
    string name;

    cin >> age;
    cin.get(ch);
    getline(cin, name);

    cout << age << endl << ch << endl << name;
}