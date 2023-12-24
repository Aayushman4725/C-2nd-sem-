#include <iostream>
using namespace std;

class Base
{
    private:
    int x;

    protected:
    int y;

    public:
    int z;
    void set()
    {
        cout<<"Enter 3 values:";
        cin>>x>>y>>z;
    }
    void display()
    {
        cout<<"x="<<x<<endl<<" y="<<y<<endl<<" z="<<z<<endl;
    }
    int getx()
    {
        return x;
    }
};

class Derived: public Base
{
    private:
    int result;

    public:
    void calculate()
    {
        result=getx()+y+z;
    }

    void displayResult()
    {
        cout<<endl<<"The result is: "<<result<<endl;
    }
};

int main()
{
    Derived obj;
    obj.set();
    obj.display();
    obj.calculate();
    obj.displayResult();
    obj.z=500;
    obj.display();
    return 0;
}