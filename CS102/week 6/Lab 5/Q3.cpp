#include <iostream>

using namespace std;

void input2DArr(int arr[][10], int r, int c) {
	for (int i = 0; i < r; i++)
		for (int j = 0; j < c; j++)
				cin >> arr[i][j];
}

void max(int arr[][10], int r, int c) {
	for (int i = 0; i < r; i++)
	{
		int max = 0;
		for (int j = 0; j < c; j++)
			if (arr[i][j] > max) max = arr[i][j];
		cout << "#row" << i << ":- " << max << endl;
	}
}

int main() {
	int n_row, n_col, arr[10][10];

	cout << "Enter elements of rows: ", cin >> n_row;
	cout << "Enter elements of col: ", cin >> n_col;

	input2DArr(arr, n_row, n_col);

	max(arr, n_row, n_col);
}