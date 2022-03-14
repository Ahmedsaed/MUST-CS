#include <iostream>

using namespace std;

int main() {
    const int n = 3;
	int student_grades[n][n];

	cout << "Enter Matrix Elements: " << endl;
	for (int row = 0; row < n; row++)
		for (int col = 0; col < n; col++)
			cin >> student_grades[row][col];
	
	cout << "The Sum of each row: " << endl;
	for (int row = 0; row < n; row++)
	{
		int total = 0;
		for (int col = 0; col < n; col++)
			total += student_grades[row][col];
            
		cout << "Row #" << row << " :- " << total << endl;
	}
}