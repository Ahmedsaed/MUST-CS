// Write an algorithm to find and print the circumference and area of a circle, given the radius of that circle. Use the constant value 3.14159 for π.

#include <iostream>

using namespace std;

int main()
{
    const float pi = 3.14159;
    float r;

    cout << "Radius: ", cin >> r;

    float area = r * r * pi;
    cout << "Area: ", cout << area;

    float circumference = 2 * pi * r;
    cout << "\nCircumference: ", cout << circumference;
}