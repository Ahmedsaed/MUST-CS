#include <iostream>

using namespace std;

int main() {
    int base_price, taxes, max_price, net_price;

    for (int i = 0; i < 3; i++) {
        cout << "Data of Product #" << (i+1) << endl;
        cout << "Enter base price of product: ", cin >> base_price;
        cout << "Enter taxes of product: ", cin >> taxes;
        cout << "Enter maximum price of the belonging production line: ", cin >> max_price;

        net_price = base_price + base_price * taxes / 100;
        cout << "Product net price: " << net_price << endl;

        if (net_price > max_price)
            cout << "Product net price exceeds production line maximum price" << endl;
        else
            cout << "product net price is accepted" << endl;
    }
}