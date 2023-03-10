#include <iostream> 
using namespace std; 

class car{
    private:
        string yearModel;
        string make;
        int speed;
    public:
        car(string yearModel, string make){
            this->yearModel = yearModel;
            this->make = make;
            this->speed = 0;
        }
        string getYearmadel(){return this->yearModel = yearModel;};
        void setYearmadel(string yearModel){this->yearModel = yearModel;};
        string getMake(){return this->make= make;};
        void setMake(string make){this->make = make;};

        void accelerate(){
             this->speed +=5;
        }
        void brake(){
            this->speed -=5;
        }

        void input(){cout<<speed<<endl;};
};