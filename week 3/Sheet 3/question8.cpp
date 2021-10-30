/*
    Write C++ statements to do the following:
    a. Open the file travel.dat using the variable outfile.
    b. Write the statement to format your output to two decimal places in fixed form.
    c. Write the values of the variables distance and speed in the file travel.dat.
    d. Calculate and write the travelTime in the file travel.dat.
    e. Which header files are needed to process the information in (a) to (d)?
*/

#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main()
{
    ofstream outfile;
    double distance = 375;
    double speed = 58;
    double travelTime;

    outfile.open("travel.data");

    outfile << fixed << setprecision(2);

    outfile << distance << speed;

    // time = distance / speed

    travelTime = distance / speed;

    outfile << travelTime;

    // (e) fstream and iomanip
}