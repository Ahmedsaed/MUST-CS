#include <iostream>

using namespace std;

int main() {
    // Solution using strings
    string input;

	cout << "Please Enter a number: ", cin >> input;

	cout << "The output: " << endl;
	for (int i = 0; i < input.length(); i++)
	{
		cout << input[i] << endl;
	}

    // Solution using Arithmetic operations on intgers
    int input2, digit[20] = {0}, i = 0;
	cout << "Please Enter a number: ", cin >> input2;

	while (input2) {
		digit[i++] = input2 % 10;
		input2 /= 10;
	}

	for (i--; i >= 0; i--)
		if (digit[i] != -1)
			cout << digit[i] << endl;
}