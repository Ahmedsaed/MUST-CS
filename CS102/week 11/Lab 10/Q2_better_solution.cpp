#include <iostream>
#include <cmath>

using namespace std;

int reverse(int x) {
	int n = x % 10;
	if (x /= 10) 
		return n * pow(10, floor(log10(x) + 1)) + reverse(x);
	else return n;
}

int main()
{
	cout << reverse(249);
}