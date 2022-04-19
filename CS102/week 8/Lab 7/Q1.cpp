#include <iostream>

using namespace std;

int n, m;

void append(int* a, int* b, int* c) {
	for (int i = 0; i < n + m; i++) 
		c[i] = (i <= (n + m) / 2) ? a[i] : b[i - n];
}

int main()
{
	cout << "Please enter the size of array a: ", cin >> n;
	cout << "Please enter the size of array b: ", cin >> m;

	int* a = new int[n], * b = new int[m], * c = new int[n + m];

	cout << "Please enter array a: ";
	for (int i = 0; i < n; i++)
		cin >> a[i];

	cout << "Please enter array b: ";
	for (int i = 0; i < m; i++)
		cin >> b[i];

	append(a, b, c);
	
	cout << "Displaying the array c: ";
	for (int i = 0; i < n + m; i++)
		cout << c[i] << " ";
}