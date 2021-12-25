#include <iostream>

using namespace std;

int main()
{
    int n = 10; 
    double t = 2.5; 
    bool found; 

    found = (n == 3 * static_cast<int>(t) + 1); 
    
    cout << "The value of found is: " << found << endl;
}