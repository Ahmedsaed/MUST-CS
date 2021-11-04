#include <iostream>

using namespace std;

// Declaring constants
const double RES_BILL_PROC_FEES = 4.50;
const double RES_BASIC_SERV_COST = 20.50;
const double RES_COST_PREM_CHANNEL = 7.50;
const double BUS_BILL_PROC_FEES = 15.00;
const double BUS_BASIC_SERV_COST = 75.00;
const double BUS_BASIC_CONN_COST = 5.00;
const double BUS_COST_PREM_CHANNEL = 50.00;

int main()
{
    // Declaring variables
    int accountNumber;
    char customerType;
    int numOfPremChannels;
    int numOfBasicServConn;
    double amountDue;

    // Prompt the user for the account number and customer type.
    cout << "Please Enter the account number followed by the cutomer type?" << endl;
    cin >> accountNumber >> customerType;

    // If the customer type is R or r
    if (customerType == 'R' || customerType == 'r')
    {
        // Prompt the user for the number of premium channels.
        cout << "Please Enter the number of premium channels?" << endl;
        cin >> numOfPremChannels;

        // Compute the bill.
        amountDue = RES_BILL_PROC_FEES + RES_BASIC_SERV_COST + numOfPremChannels * RES_COST_PREM_CHANNEL;

        //  Print the bill
        cout << "Your bill: " << amountDue;
    }
    else if (customerType == 'B' || customerType == 'b') //  If the customer type is B or b,
    {
        //Prompt the user for the number of basic service connections and number of premium channels.
        cout << "Please Enter the number of basic service connections?" << endl;
        cin >> numOfBasicServConn;

        cout << "Please Enter the number of premium channels?" << endl;
        cin >> numOfPremChannels;

        // Compute the bill.
        if (numOfBasicServConn <= 10)
            amountDue = BUS_BILL_PROC_FEES + BUS_BASIC_SERV_COST + numOfPremChannels * BUS_COST_PREM_CHANNEL;
        else amountDue = BUS_BILL_PROC_FEES + BUS_BASIC_SERV_COST + (numOfBasicServConn - 10) * BUS_BASIC_CONN_COST + numOfPremChannels * BUS_COST_PREM_CHANNEL;

        // Print the bill
        cout << "Your bill: " << amountDue;
    }
    else
    {
        cout << "Invalid input";
    }
}   