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
	int total = 0;
};

#define n_student 3

int main()
{
	Student student[n_student];

	for (int i = 0; i < n_student; i++)
	{
		cout << "Enter Id: ", cin >> student[i].id;
		cout << "Enter name: ", cin >> student[i].name;
		cout << "Enter date of birth: ", cin >> student[i].dob.day, cin >> student[i].dob.month, cin >> student[i].dob.year;

		cout << "Enter 6 Grades for student: ";
		for (int j = 0; j < 6; j++) {
			cin >> student[i].grades[j];
			student[i].total += student[i].grades[j];
		}
	}

	int max = 0;
	for (int i = 0; i < n_student; i++)
	{
		if (student[i].total > max) {
			max = student[i].total;
		}
	}

	for (int i = 0; i < n_student; i++)
	{
		if (student[i].total == max) {
			cout << "ID: " << student[i].id;
			cout << "Name: " << student[i].name;
			cout << "Date: " << student[i].dob.day << "/" << student[i].dob.month << "/" << student[i].dob.year;
			cout << "Total: " << student[i].total;
		}
	}
}