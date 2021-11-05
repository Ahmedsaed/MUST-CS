#include <iostream>
#include <string>

using namespace std;

int main()
{
    int x, y, z, hours, wages, score;
    string str;

    z = (x >= y) ? x - y : y - x;

    wages = (hours >= 40.0) ? 40 * 7.50 + 1.5 * 7.5 * (hours - 40) : hours * 7.50;

    str = (score >= 60) ? "Pass" : "Fail";
}