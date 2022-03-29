#include <iostream>

using namespace std;

int pow(int x, int y) {
	int result = 1;

	for (int i = 0; i < y; i++)
		result *= x;

	return result;
}

int factorial(int num) {
	int result = 1;
	for (int i = num; i >= 2; i--)
		result *= num;
	return result;
}

double exponent(int poe, int limit) {
	double result = 0;
	
	for (int i = 0; i <= limit; i++)
		result += ((1.0 * pow(poe, i)) / factorial(i));

	return result;
}

int main()
{
	int poe, limit;

	cout << "Enter the power of e and the limit of the series: ", cin >> poe >> limit;

	cout << "e to the power of " << poe << " to limit " << limit << " = " << exponent(poe, limit);
}