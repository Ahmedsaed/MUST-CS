#include <iostream>

using namespace std;

#define elements 5

int main() {
    int arr1[elements];
	int arr2[elements];

	cout << "Enter the first array: " << endl;
	for (int elem = 0; elem < elements; elem++)
		cin >> arr1[elem];

	cout << "Enter the Second array: " << endl;
	for (int elem = 0; elem < elements; elem++)
		cin >> arr2[elem];

	cout << "The Result: " << endl;
	for (int elem = 0; elem < elements; elem++)
		cout << arr1[elem] + arr2[elem] << " ";
	cout << endl;
}