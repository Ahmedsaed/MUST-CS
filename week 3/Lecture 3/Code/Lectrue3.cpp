#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
#include <fstream>

using namespace std;

int main()
{
    int x, y, z;
    double n;
    char ch;

    // -----------------

    // cin >> ch;
    // cin >> x;

    // cout << "Character: " << ch << endl;
    // cout << "Intger: " << x;

    // ------------------

    // cout << "write a character? ";
    // cin >> ch;
    // cout << ch;

    // --------------------

    // cout << "write a number? ";
    // cin >> n;
    // cout << n;

    // ---------------------
    
    // cout << "write two numbers?";
    // cin >> x >> y;
    // z = pow(x, y);
    // cout << z;

    // ------------------------

    // cin.get(ch); 
    // cout << ch;

    // ---------------------------

    // char name[50]; // is equivalent to: string name;

    // cout << "What's your name? ";

    // cin.get(name, 40);
    // cout << name << endl;

    // cin >> name;
    // cout << name;


    // ----------------------------- cin.ignore(int, char);


    // char First_name[10]; // is equivalent to: string First_name;
    // char middle_name[10]; // is equivalent to: string middle_name;
    // char family_name[10]; // is equivalent to: string middle_name;

    // cout << "What's your Full Name?";

    // cin >> First_name;
    // cout << "Your First Name: " << First_name << endl;

    // cin.ignore(20, ' ');
    // cin.ignore(20, ' ');

    // cin >> family_name;
    // cout << "Your Family Name: " << family_name << endl;

    // ----------------------------- setprecision(n)

    // n = 22.0 / 7;

    // cout << n << endl;
    
    // cout << fixed << setprecision(3);

    // cout << n;
    
    // ----------------------------- setw(n)

    // x = 5;

    // cout << setw(5) << x << endl;

    // cout << setw(5) << setfill('*') << x << endl;

    // cout << setw(5) << setfill('*') << left << x << endl;

    // ----------------------------- strings without blanks
    
    // string name;

    // cout << "what's your name?";

    // cin >> name;

    // cout << "your name is " << name;

    //  ----------------------------- strings with blanks

    // string name;

    // cout << "what's your name?";

    // getline(cin, name);

    // cout << "your name is " << name;

    // ------------------------------ File I/O

    // ifstream inData;
    // ofstream outData;

    // inData.open("names.data");

    // string data;

    // getline(inData, data);
    // cout << data << endl;

    // getline(inData, data);
    // cout << data << endl;

    // getline(inData, data);
    // cout << data;

    // inData.close();

    // ---------------------------------

    // TODO: Save the output to final.out 

    ifstream client_names;
    ifstream client_numbers;
    ofstream final;

    client_names.open("names.data");
    client_numbers.open("numbers.data");
    final.open("file.out");

    string name;
    string number;

    getline(client_names, name);
    getline(client_numbers, number);
    final << name << ": " << number << endl;

    getline(client_names, name);
    getline(client_numbers, number);
    final << name << ": " << number << endl;

    getline(client_names, name);
    getline(client_numbers, number);
    final << name << ": " << number << endl;

    final.close();
    client_names.close();
    client_numbers.close();
}