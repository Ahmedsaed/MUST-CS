#include <iostream>
#include <string>

using namespace std;

int n;

struct Product {
	int id;
	string name;
	int quantity;
	int price;
};

void inputProducts(Product* pr) {
	for (int i = 0; i < n; i++)
	{
		cout << "Product 1 Data" << endl;
		cout << "Product Number: ", cin >> pr[i].id;
		cout << "Product Name: ", cin >> pr[i].name;
		cout << "Product Quantity: ", cin >> pr[i].quantity;
		cout << "Product Price: ", cin >> pr[i].price;
	}
}

int calTotalPrice(Product* pr) {
	int total = 0;
	for (int i = 0; i < n; i++)
		total += pr[i].quantity * pr[i].price;
	return total;
}

int main()
{
	cout << "Enter the number of products: ", cin >> n;

	Product* pr = new Product[n];

	inputProducts(pr);

	cout << "Total: " << calTotalPrice(pr);
}