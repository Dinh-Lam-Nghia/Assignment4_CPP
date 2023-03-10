#include <iostream> 
#include "./sp.cpp"
using namespace std; 

int main(int argc, char const *argv[])
{
    int itemNumber;//mã hàng
    int quantity; //số lượng
    double cost; //chi phí

    cout << "itemNumber: "; cin>> itemNumber;
    cout << "quantity: "; cin>> quantity;
    cout << "cost: "; cin>> cost;
    cout<< "--------------------------\n";
    if (itemNumber<=0 || quantity<=0 || cost<=0) return main(argc, argv);


    Inventory Inventory(itemNumber, quantity, cost);
    Inventory.input();

    return 0;
}
