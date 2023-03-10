#include <iostream> 
using namespace std; 

class Inventory{
    private:
        int itemNumber;//mã hàng
        int quantity; //số lượng
        double cost; //chi phí
        double totalCost; //tổng chi phí (quantity * cost)

    public:
        Inventory(){
            this->itemNumber = 0;
            this->quantity = 0;
            this->cost = 0;
            this->totalCost = 0;
        }
        Inventory(int itemNumber, int quantity, double cost){
            this->itemNumber = itemNumber;
            this->quantity = quantity;
            this->cost = cost;
            setTotalcost(quantity, cost);
        }

        int getItemNumber() { return this->itemNumber = itemNumber; };
        void setItemNumber(int itemNumber, int quantity) { this->itemNumber = itemNumber; };

        int getQuantity() { return this->quantity = quantity; };
        void setQuantity(int quantity) { this->quantity = quantity; };

        double getCost() { return this->cost = cost; };
        void setCost(double cost) { this->cost = cost;};

        double getTotalcost() { return this->totalCost = totalCost; };
        void setTotalcost(int quantity, double cost) { this->totalCost = quantity*cost;};

        void input(){
            cout << "---------------\n";
            cout << "itemNumber: "<< this->itemNumber <<endl
                 << "quantity: " << this->quantity <<endl
                 << "cost: "<< this->cost <<endl
                 << "totalCost: "<< this->totalCost<<endl;
        }
};