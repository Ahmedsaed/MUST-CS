#include <iostream>
#include <string>

using namespace std;

#define n_sales 7
#define n_products 3


struct ExpiryDate
{
    int day;
    int month;
    int year;
};

struct Product
{
    int serialNumber;
    string name;
    ExpiryDate expiryDate;
    int quantity;
    string type;
    int salesPerDay[n_sales];
};


int main() {
    //Part 1: Read from the user data of three products.​
    Product products[n_products];
    cout << "Please, Enter the data of three products" << endl;
    for (int i = 0; i < n_products; i++) {
        cout << "Enter the values of product number " << i << endl;
        cout << "Serial Num: ", cin >> products[i].serialNumber;
        cout << "Name: ", cin >> products[i].name;
        cout << "Expiry Date (Day,Month,Year): ", cin >> products[i].expiryDate.day >> products[i].expiryDate.month >> products[i].expiryDate.year;
        cout << "Quantity in store: ", cin >> products[i].quantity;
        cout << "Type: ", cin >> products[i].type;
        cout << n_sales << " values that represent sales for week days: ";
        for (int j = 0; j < n_sales; j++)
            cin >> products[i].salesPerDay[j];
    }

    //Part 2: Display products that will expire by a certain day.​
    cout << endl << "Products that will expire before 1/1/2020" << endl;
    for (int i = 0; i < n_products; i++)
    {
        // no need to check for the day and month because there values are the lowest possible ever (i.e. there is no day before day 1)
        if (products[i].expiryDate.year < 2020)
            cout << products[i].name << endl;
    }
    
    //Part 3: Display products that have less quantity than a value entered by a user.​
    int quantity;
    cout << endl << "Please Enter a quantity: ", cin >> quantity;
    for (int i = 0; i < n_products; i++)
    {
        if (products[i].quantity < quantity)
            cout << products[i].name << endl;
    }

    //Part 4: Display the product with the highest total sales per week.​
    int max = 0;
    string highestName = "";

    cout << endl << "Product With the highest sales per week: " << endl;
    for (int i = 0; i < n_products; i++)
    {
        int total = 0;
        for (int j = 0; j < n_sales; j++)
            total += products[i].salesPerDay[j];
        
        if (total > max) {
            max = total;
            highestName = products[i].name;
        }
    }
    cout << highestName << endl;

}