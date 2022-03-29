#include <iostream>

using namespace std;

struct Fraction {
    int num;
    int den;
};

int main() {
    Fraction frac1, frac2, result;
    
    cout << "Enter fraction 1 (numerator denominator): ", cin >> frac1.num >> frac1.den;  
    cout << "Enter fraction 2 (numerator denominator): ", cin >> frac2.num >> frac2.den;  

    result.num = frac1.num * frac2.den + frac1.den * frac2.num;
    result.den = frac1.den * frac2.den;

    cout << "Result: " << result.num << "/" << result.den;

    return 0;
}