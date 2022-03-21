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
} products[n_products];

// Function prototypes
void ExpiredProductsByCertainDate();
void ExpiredProductsByCertainDate(ExpiryDate date);
void ProductsLessThan(int quantity);
int GetIndexOfHighestSales();

int main() {
    cout << "Please, Enter the data of three products" << endl;
    for (int i = 0; i < n_products; i++) {
        cout << "Enter the values of product number " << (i + 1) << endl;
        cout << "Serial Num: ", cin >> products[i].serialNumber;
        cout << "Name: ", cin >> products[i].name;
        cout << "Expiry Date (Day,Month,Year): ", cin >> products[i].expiryDate.day >> products[i].expiryDate.month >> products[i].expiryDate.year;
        cout << "Quantity in store: ", cin >> products[i].quantity;
        cout << "Type: ", cin >> products[i].type;
        cout << n_sales << " values that represent sales for week days: ";
        for (int j = 0; j < n_sales; j++)
            cin >> products[i].salesPerDay[j];
    }

    // Part 1: Display products that will expire at 1/1/2020.​
    ExpiredProductsByCertainDate();

    // Part 2: Display the products that will expire by a certain date entered by the user.
    ExpiryDate userInput;
    cout << "Please enter the expiry date you want to work on (Day, Month, Year): ", cin >> userInput.day >> userInput.month >> userInput.year;
    ExpiredProductsByCertainDate(userInput);

    // Part 3: Display products that have less quantity than a value entered by the user.​
    int quantity;
    cout << endl << "Please Enter a quantity: ", cin >> quantity;
    ProductsLessThan(quantity);

    // Part 4: Function that will return the index of the product with the highest weekly sales.​
    cout << "The product with the highest Sale" << endl;
    cout << products[GetIndexOfHighestSales()].name << endl;
}

void ExpiredProductsByCertainDate() {
    cout << endl << "Products that will expire before 1/1/2020" << endl;
    for (int i = 0; i < n_products; i++)
    {
        // no need to check for the day and month because there values are the lowest possible ever (i.e. there is no day before day 1)
        if (products[i].expiryDate.year < 2020)
            cout << products[i].name << endl;
    }
}

void ExpiredProductsByCertainDate(ExpiryDate date) {
    cout << endl << "Products that will expire before " << date.day << "/" << date.month << "/" << date.year << endl;
    for (int i = 0; i < n_products; i++)
    {
        if (products[i].expiryDate.year < date.year ||
            (products[i].expiryDate.year == date.year && products[i].expiryDate.month < date.month) ||
            (products[i].expiryDate.year == date.year && products[i].expiryDate.month == date.month && products[i].expiryDate.day < date.day))
            cout << products[i].name << endl;
    }
}

void ProductsLessThan(int quantity) {
    cout << "Products that have less than this quantity: " << endl;
    for (int i = 0; i < n_products; i++)
    {
        if (products[i].quantity < quantity)
            cout << products[i].name << endl << endl;
    }
}

int GetIndexOfHighestSales() {
    int max = 0, index = -1;

    for (int i = 0; i < n_products; i++)
    {
        int total = 0;
        for (int j = 0; j < n_sales; j++)
            total += products[i].salesPerDay[j];
        
        if (total > max) {
            max = total;
            index = i;
        }
    }
    return index;
}