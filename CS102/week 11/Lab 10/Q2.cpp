#include <iostream>

using namespace std;

void reverse(int x) {
	int n = 1;
	if (x > 0) {
		n = x % 10;
		x /= 10;
	}
	else return;

	cout << n;

	return reverse(x);
}

int main()
{
	reverse(249);
}