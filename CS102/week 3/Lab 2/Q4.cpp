#include <iostream>
#include <string>

using namespace std;

#define n_row 2
#define n_col 3


int main()
{
	int arr1[n_row][n_col];
	int arr2[n_row][n_col];

	cout << "Enter Matrix 1 elements" << endl;
	for (int row = 0; row < n_row; row++)
		for (int col = 0; col < n_col; col++)
			cin >> arr1[row][col];
	
	
	cout << "Enter Matrix 2 elements" << endl;
	for (int row = 0; row < n_row; row++)
		for (int col = 0; col < n_col; col++)
			cin >> arr2[row][col];
	
	
	cout << "The sum of Matrix 1 and Matrix 2: " << endl;
	for (int row = 0; row < n_row; row++)
	{
		for (int col = 0; col < n_col; col++)
			cout << arr1[row][col] + arr2[row][col] << "  ";
		cout << endl;
	}
}