#include <iostream>
using namespace std;

class Parent
{
    protected:
    int x;

    public:
    Parent()
    {
        x=0;
        cout<<"/nInside default Constructor of Parent"<<endl;
    }

    Parent(int x)
    {
        this->x=x;
        cout<<"/nInside Parameterized Constructor of Parent"<<endl;
    }

    void displayParent()
    {
        cout<<"\nValue of x:"<<x<<endl;
    }
};

class Child:public Parent
{
    protected:
    int y;

    public:
    Child()
    {
        y=0;
        cout<<"\nInside default constructor of Child"<<endl;
    }

    Child(int x,int y):Parent(x)
    {
        this->y=y;
        cout<<"\nInside Parameterized constructor of Child"<<endl;
    }

    void displayChild()
    {
        displayParent();
        cout<<"\nValue of y:"<<y<<endl;
    }
};

class GrandChild:public Child
{
    int z;

    public:
    GrandChild()
    {
        z=0;
        cout<<"\nInside default constructor of GrandChild"<<endl;
    }

    GrandChild(int x,int y,int z):Child(x,y)
{
    this->z=z;
    cout<<"\nInside Parameterized constructor of GrandChild"<<endl;
}

void displayGrandChild()
{
    displayParent();
    displayChild();
    cout<<"\nValue of z:"<<z<<endl;
}
};

int main()
{
    GrandChild objGC(55,95,105);
    objGC.displayGrandChild();
    GrandChild objGC2();
    return 0;
}