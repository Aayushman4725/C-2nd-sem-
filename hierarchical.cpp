#include <iostream>
using namespace std;

class A
{
    protected:
    int x,y;

    public:
    void set()
    {
        cout<<"Enter 2 values:";
        cin>>x>>y;
    }
};

class B:public A
{
    int result;
    
    public:
    void calculate()
    {
        result=x+y;
        cout<<"Result: "<<result<<endl;
    }
};

class C:public A
{
    int resultC;

    public:
    void calculateC()
    {
        resultC=x*y*1056;
        cout<<"Result: "<<resultC<<endl;
    }
};

int main()
{
    B objB;
    objB.set();
    objB.calculate();
    C objC;
    objC.set();
    objC.calculateC();
    return 0;
}