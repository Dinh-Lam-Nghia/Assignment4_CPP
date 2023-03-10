#include <iostream>
using namespace std;
class NhanVien{
    private:
        string name;
        string ID;
        string department;
        string position;
    
    public:
        NhanVien(){
            this->name = "";
            this->ID = "0";
            this->department = "";
            this->position = "";
        };
        NhanVien(string name, string ID){
            this->name = name;
            this->ID = ID;
        }
        NhanVien(string name, string ID, string description){
            this->name = name;
            this->ID = ID;
            this->department = department;
        }
        NhanVien(string name, string ID, string description, string position){
            this->name = name;
            this->ID = ID;
            this->department = department;
            this->position = position;
        }

        string getName(){return this->name = name;};
        void setName(string name){this->name = name;};

        string getID(){return this->ID = ID;};
        void setID(string ID){this->ID = ID;};
        
        string getDepartment(){return this->department = department;};
        void setDepartment(string department){this->department = department;};

        string getPosition(){return this ->position = position;};
        void setposition(string position){this->position = position;};

        void input(){
            cout<< "Name: "<< getName() << "\n" 
                << "ID: " << getID() << "\n"
                << "department: " << getDepartment() << "\n"
                << "position: " << getPosition() << endl<< endl;;
        }
};