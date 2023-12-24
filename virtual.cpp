#include <iostream>
using namespace std;

class Base
{
    protected:
    int x;

    public:
    virtual void example()
    {
        cout<<"Inside base\n\n";
    }
};

class Derived :public Base
{
    int y;

    public:
    void example()
    {
        cout<<"Inside Child";
    }
};

int main()
{
    Base *bptr;
    Base bobj;
    bptr=&bobj;
    bptr->example();
    bptr=NULL;
    Derived dobj;
    bptr=&dobj;
    bptr->example();
    bptr=NULL;
    return 0;
}