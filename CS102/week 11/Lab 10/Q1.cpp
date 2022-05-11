#include <iostream>

using namespace std;

int fibonacciNumbers(int z, int x = 0, int y = 1) {
	if (z--)
		fibonacciNumbers(y, y + x, z);
	else return x;
}

int main()
{
	cout << fibonacciNumbers(6);
}