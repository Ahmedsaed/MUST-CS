#include <iostream>

using namespace std;

int main()
{
    char grade = 'A';

    switch (grade)
    {
    case 'A':
        cout << "Your score is 90-100";
        break;
    case 'B':
        cout << "Your score is 80-90";
        break;
    default:
        cout << grade;
        break;
    }
}