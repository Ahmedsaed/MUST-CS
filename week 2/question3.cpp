/* 
Write C++ statement(s) that accomplish the following:
o Declare int variables x and y. Initialize x to 25 and y to 18.
o Declare and initialize an int variable temp to 10 and a char variable ch to 'A'.
o Update the value of an int variable x by adding 5 to it.
o Declare and initialize a double variable payRate to 12.50.
o Copy the value of an int variable firstNum into an int variable tempNum.
o Swap the contents of the int variables x and y. (Declare additional variables, if necessary.)
o Suppose x and y are double variables. Output the contents of x, y, and the expression x+12/y-18.
o Declare a char variable grade and set the value of grade to 'A'.
o Declare int variables to store four integers.
o Copy the value of a double variable z to the nearest integer into an int variable x.
*/


#include <iostream>

using namespace std;

int main()
{
	// 1
	int x = 25, y = 18;

	// 2
	int temp = 10, char ch = 'A';

	// 3
	x += 5;

	// 4
	double payRate = 12.50;

	// 5
	int firstNum = 5, tempNum;

	tempNum = firstNum;

	// 6
	int swapTmp;

	swapTmp = x;
	x = y;
	y = swapTmp;

	// 7
	double x, y;

	cout << x << endl << y << endl << x + 12 / y - 18 << endl;

	// 8
	char grade;

	grade = 'A';

	// 9
	int a, b, c, d;

	// 10
	double z = 11.22;
	int x;

	x = static_cast<int>(z);
	cout << x << endl;
}