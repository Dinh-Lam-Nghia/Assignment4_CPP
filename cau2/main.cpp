#include <iostream> 
#include "./CAR.cpp"
using namespace std; 

int main(int argc, char const *argv[])
{
    car car("2021", "VN");
    for (int i = 0; i <= 5; i++)
    {
        car.accelerate();
        car.input();
    }
    cout<< "-----------";
    for (int i = 0; i <= 5; i++)
    {
        car.brake();
        car.input();
    }
    
    
    return 0;
}
