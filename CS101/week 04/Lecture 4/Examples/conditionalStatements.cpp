#include <iostream>

using namespace std;

int main()
{
    int score = 85;

    char grade;

    grade = (score >= 90) ? 'A' : (score >= 80 && score < 90) ? 'B' : 'C';

    cout << "Grade: " << grade << endl;
}