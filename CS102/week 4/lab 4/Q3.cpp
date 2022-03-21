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
		for (int j = 0; j < 6; j++)
			cin >> student[i].grades[j];

		int total = 0;
		for (int j = 0; j < 6; j++)
			total += student[i].grades[j];

		cout << "Total Grade is: " << total << endl;
	}
}
