#include <iostream> 
#include "./RetailItem.cpp"
using namespace std; 

int main(int argc, char const *argv[])
{

    string description;
    int unitsOnHand;
    float price;
    cout<< "description: "; cin >> description;
    cout << "unitsOnHand: "; cin >> unitsOnHand;
    cout << "price: "; cin>> price;

    RetailItem retailItem(description, unitsOnHand, price);
    retailItem.input();
    return 0;
}
