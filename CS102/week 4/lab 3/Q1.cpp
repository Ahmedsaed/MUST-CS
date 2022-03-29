#include <iostream>

using namespace std;

struct Date {
	int day, month, year;
};

int main()
{
	Date userinput;
	cout << "Enter Day: ", cin >> userinput.day;
	cout << "Enter Month: ", cin >> userinput.month;
	cout << "Enter year: ", cin >> userinput.year;

	cout << "The Date you Entered is: " << userinput.day << "/" << userinput.month << "/" << userinput.year;
}