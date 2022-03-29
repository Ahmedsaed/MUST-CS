#include <iostream>

using namespace std;

int pow(int x, int y) {
	int result = 1;

	for (int i = 0; i < y; i++)
	{
		result *= x;
	}

	return result;
}


int main()
{
	int x, y;
	cout << "Enter The base: ", cin >> x;
	cout << "Enter the power: ", cin >> y;

	cout << x << " to the power of " << y << " is " << pow(x, y);
}