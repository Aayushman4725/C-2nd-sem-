#include <iostream>
using namespace std;

class A
{
    protected:
    int a;

    public:
    void setA()
    {
        cout<<"Enter value of a:";
        cin>>a;
    }
};

class B:public A
{
    protected:
    int b;
    
    public:
    void setB()
    {
        cout<<"Enter value of b:";
        cin>>b;
    }
};

class C:public B
{
    int c;

    public:
    void setC()
    {
        cout<<"Enter value of c:";
        cin>>c;
    }

    void calculate()
    {
        cout<<"Result:"<<(a*b*c)<<endl;
    }
};

int main()
{
    C obj;
    obj.setA();
    obj.setB();
    obj.setC();
    obj.calculate();
    return 0;
}