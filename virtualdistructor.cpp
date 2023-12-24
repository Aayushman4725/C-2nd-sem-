#include <iostream>
using namespace std;

class Base
{
    protected:
    int x;

    public:

    Base()
    {
        cout<<"\nThis is Base"<<endl;
    }

    virtual ~Base()
        {
            cout<<"\nDestructor of Base"<<endl;
        }
};

class Derived : public Base
{
    int y;

    public:

    Derived()
    {
        cout<<"\nThis is Derived"<<endl;
    }

    ~Derived()
        {
            cout<<"\nDestructor of Derived"<<endl;
        }

};

int main()
{
    Base *bptr;
    bptr= new Base;
    delete bptr;
    bptr=NULL;
    bptr=new Derived;
    delete bptr;
    bptr=NULL;
    return 0;
}