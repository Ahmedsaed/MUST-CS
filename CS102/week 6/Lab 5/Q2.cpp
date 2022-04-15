#include <iostream>

using namespace std;

void input(int arr[], int n) {
    for (int i = 0; i < n; i++)
        cin >> arr[i];
}

bool checkEqual(int arr1[], int arr2[], int n) {
    for (int i = 0; i < n; i++)
        if (arr1[i] != arr2[i]) return false;
    
    return true;
}


int main()
{
    const int n = 5;
    int arr1[n], arr2[n];

    cout << "Enter Elements of first array: ", input(arr1, n);
    cout << "Enter Elements of second array: ", input(arr2, n);

    cout << "Result: ";
    if (checkEqual(arr1, arr2, n)) cout << "Equal";
    else cout << "Not Equal";
}