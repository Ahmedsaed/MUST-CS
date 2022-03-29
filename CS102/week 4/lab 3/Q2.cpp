#include <iostream>
#include <string>

using namespace std;

struct Date {
	int day, month, year;
};

struct Student
{
	int id;
	string name;
	Date dob;
	int grades[6];
};

int main()
{
	Student student;

	cout << "Enter Id: ", cin >> student.id;
	cout << "Enter name: ", cin >> student.name;
	cout << "Enter date of birth: ", cin >> student.dob.day, cin >> student.dob.month, cin >> student.dob.year;

	cout << "Enter 6 Grades for student: ";
	for (int i = 0; i < 6; i++)
		cin >> student.grades[i];

	int total = 0;
	for (int i = 0; i < 6; i++)
		total += student.grades[i];

	cout << "Total Grade is: " << total;

}