## Assignment 1

### Question 1

Write a C++ program that asks the user to enter a student’s score then prints “passed” if the student’s score is greater than or equal 60 otherwise prints “failed”. The program repeats the mentioned process as long as the user enters a score that is different from -1.

``` c++
#include <iostream>

using namespace std;

int main()
{
    int score = 0;

    cout << "Student Score: ", cin >> score;

    while (score != -1)
    {
        cout << ((score >= 60) ? "passed" : "failed") << endl;
        cout << "Student Score: ", cin >> score;
    }
}
```

### Question 2

Write a C++ program that asks the user to enter 10 numbers then prints their sum. 

``` c++
#include <iostream>

using namespace std;

int main()
{
    int tmp, sum = 0;

    cout << "Please, Enter 10 numbers: ";

    for (int i = 0; i < 10; i++)
    {
        cin >> tmp;
        sum += tmp;
    }

    cout << "Sum: " << sum;
}
```

### Question 3
Write a C++ program that asks the user to enter an integer number and prints its factorial.

``` c++
#include <iostream>

using namespace std;

int main()
{
    int x, result = 1;

    cout << "Enter a number: ", cin >> x;

    for (int i = x; i > 0; i--)
        result *= i;

    cout << "Factorial: " << result;
}
```

### Question 4
Write a C++ program that asks the user to enter two integers, then computes and prints the first number raised to the power of second number.

``` c++
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n1, n2;

    cout << "Enter 2 numbers: ", cin >> n1 >> n2;

    cout << "Result: " << pow(n1, n2);
}
```

### Question 5
Write a C++ program that prints the maximum element in an integer array. 

``` c++
#include <iostream>

using namespace std;

int main()
{
    int x[] = {1, 2, 3, 6, 5}, max; // size: 5

    max = x[0]; // Assume the first element is the largest

    for (int i = 0; i < 5; i++)
        if (max < x[i]) max = x[i];    

    cout << max;
}
```

### Question 6
Write a C++ program that reads 10 integer numbers into an array, then prints them in a reverse order.

```c++
#include <iostream>

using namespace std;

int main()
{
    int x[10];

    cout << "Enter 10 numbers: ";
    for (int i = 0; i < 10; i++)
    {
        cin >> x[i];
    }

    cout << "Reversed: ";
    for (int i = 9; i >= 0; i--)
    {
        cout << x[i] << ' ';
    }
}
```
### Question 7
Write the definition of a C++ function that has one formal parameter that is an integer, then returns the factorial of its parameter. Test the use of this function in a program. 

``` c++
#include <iostream>

using namespace std;

int factorial(int x);

int main()
{
    cout << factorial(5) << endl;
    cout << factorial(9) << endl;
}

int factorial(int x)
{
    int result = 1;

    for (int i = x; i > 0; i--)
    {
        result *= i;
    }

    return result;
}
```

### Question 8
Write a C++ function that has three formal parameters, the first one is an integer array, the second one is the size of that array, and the third parameter is a key value. If the key value equals to an element in the given array, the function should return the index of that element, otherwise it returns -1. Test the use of this function in a program. 

``` c++
#include <iostream>

using namespace std;

int func(int x[], int size, int key);

int main()
{
    int y[] = {1, 2, 5, 4, 3}; // Size: 5

    cout << func(y, 5, 3); // should print 4
}

int func(int x[], int size, int key)
{
    for (int i = 0; i < size; i++)
        if (key == x[i]) return i;

    return -1;
}
```

### Question 9
Write a C++ program that store four given different names into the file named demo.txt.

``` c++
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream outFile;

    outFile.open("demo.txt");

    outFile << "name1" << endl
            << "name2" << endl
            << "name3" << endl
            << "name4";

    outFile.close();
}
```

### Question 10

Write a C++ program that reads three numbers from the user then stores them in the file named numbers.txt. 

```c++
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int tmp;
    ofstream outFile;

    outFile.open("numbers.txt");

    cout << "Enter 3 numbers: ";
    for (int i = 0; i < 3; i++)
    {
        cin >> tmp;
        outFile << tmp << endl;
    }

    outFile.close();
}
```
