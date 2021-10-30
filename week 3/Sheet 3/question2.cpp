#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{
    int x, y;
    string message;
    double z;

    x = 4;
    y = 3;
    z = 2.5;

    cout << static_cast<int>(pow(x, 2.0)) << endl; // 16
    cout << static_cast<int>(pow(z, y)) << endl; // 15
    cout << pow(x, z) << endl;  // 32
    cout << sqrt(36.0) << endl; // 6

    z = pow(9.0, 2.5); // z=243
    cout << z << endl; // 243

    message = "Using C++ predefined function";
    cout << "Length of message = " << message.length() << endl; // Length of message = 29

    return 0;
}
