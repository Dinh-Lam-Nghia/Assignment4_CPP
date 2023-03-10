#include <iostream> 
using namespace std; 

class RetailItem{
    private :
        string description;
        int unitsOnHand;
        float price;

    public:
        RetailItem(string description, int unitsOnHand, float price){
            this->description = description;
            this->unitsOnHand = unitsOnHand;
            this->price = price;
        }

        string getDescription(){return this->description = description;};
        void setDescription(string description){this->description = description;};

        int getUnitsOnHand(){return this->unitsOnHand = unitsOnHand;};
        void setUnitsOnHand(int unitsOnHand){this->unitsOnHand = unitsOnHand;};

        float getPrice(){return this->price = price;};
        void setPrice(float price){this->price = price;};

        void input(){cout<<"-------------------------" << endl
                         << "product information saved: " << endl
                         << " - description: " << this->description<< endl 
                         << " - unitsOnHand: " << this->unitsOnHand<< endl
                         << " - price: "       << this->price << endl;};
};