#include <iostream>
using namespace std;

class Parent
{
    protected:
    int x;

    public:
    Parent()
    {
    }

    Parent(int x)
    {
        this->x=x;
        cout<<"\nInside Paramterized Constructor of Parent\n";
    }

    void displayParent()
    {
        cout<<"\nValue of x:"<<x<<endl;
    }
};

class Child:public Parent
{
    int y;

    public:
    Child()
    {     
    }

    Child(int x, int y):Parent(x)
    {
        this->y = y;
        cout<<"\nInside parameterized Constructor of Child\n";
    }

    void displayChild()
    {
        displayParent();
        cout<<"\nValue of y:"<<y<<endl;
    }
};

int main()
{
    Parent pobj(10);
    pobj.displayParent();
    Child cobj(55,65);
    cobj.displayChild();
    Child cobj2();
    cobj.displayChild();
    return 0;
}