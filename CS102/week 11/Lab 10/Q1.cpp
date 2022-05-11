#include <iostream>

using namespace std;

int fibonacciNumber(int z, int x = 0, int y = 1) {
	if (z--)
		fibonacciNumber(y, y + x, z);
	else return x;
}

int main()
{
	cout << fibonacciNumber(6);
}