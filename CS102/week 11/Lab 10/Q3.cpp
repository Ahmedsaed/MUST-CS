#include <iostream>

using namespace std;

bool isPrime(int x, int n = 2) {
	if (x == 0 || x == 1) return false;
	else if (x == 2 || x == 3) return true;
	else if (n * n < x) {
		if (x % n == 0)
			return false;
		else
			return isPrime(x, ++n);
	}
	else return true;
}

int main() {
	cout << boolalpha << isPrime(5) << endl;
	cout << boolalpha << isPrime(2) << endl;
	cout << boolalpha << isPrime(12) << endl;
	cout << boolalpha << isPrime(18) << endl;

}