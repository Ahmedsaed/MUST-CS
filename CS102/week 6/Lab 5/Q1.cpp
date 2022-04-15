#include <iostream>

using namespace std;

void swap(int& n1, int& n2) {
    n1 += n2;
    n2 = n1 - n2;
    n1 -= n2;
}

void order(int& n1, int& n2, int& n3) {
    if (n1 > n2 && n1 > n3) 
        swap(n1, n3);
    if (n2 > n1 && n2 > n3) 
        swap(n2, n3);

    if (n1 > n2)
        swap(n1, n2);
}


int main()
{
    int num1, num2, num3;

    cin >> num1 >> num2 >> num3;

    order(num1, num2, num3);

    cout << num1 << " " << num2 << " " << num3;
}