#include <iostream>

using namespace std;

int main()
{   
    int numOfItemsBought, shippingCharges;


    if (0 < numOfItemsBought && numOfItemsBought < 5)
        shippingCharges = 5.00 * numOfItemsBought;
    else if (5 <= numOfItemsBought && numOfItemsBought < 10)
        shippingCharges = 2.00 * numOfItemsBought;
    else
        shippingCharges = 0.00;

}