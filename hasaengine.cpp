#include <iostream>
using namespace std;

class Engine 
{
 
   public:
       
   void startEngine()
     {
        cout<<"Engine started"<<endl;
     }


    void stopEngine()
    {
        cout<<"Engine stopped"<<endl;
    }
};

class Car:public Engine
{
    Engine e;

    public:

    void startCar()
    {
        e.startEngine();
        cout<<"\n\nCar started"<<endl;
    }

    void stopCar()
    {
        e.stopEngine();
        cout<<"\nCar stopped"<<endl;
    }
};

int main()
{
    Car c;
    c.startCar();
    c.stopCar();
    return 0;
}