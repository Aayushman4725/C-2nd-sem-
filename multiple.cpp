#include <iostream>
using namespace std;

class A
{
    protected:
    int x;

    public:
    void setx()
    {
        cout<<"Enter the value of x:";
        cin>>x;
    }

    void displayx()
    {
        cout<<"Value of x:"<<x<<endl;
    }
};

class B
{
    protected:
    int y;

    public:
    void sety()
    {
        cout<<"Enter the value of y:";
        cin>>y;
    }

    void displayy()
    {
        cout<<"Value of y:"<<y<<endl;
    }
};

class C:public A,public B
{
    protected:
    int result;

    public:
    void calculate()
    {
        result=x*y;
    }

    void displayResult()
    {
        cout<<"Result:"<<result<<endl;
    }
};

int main()
{
    C obj;
    obj.setx();
    obj.sety();
    obj.displayx();
    obj.displayy();
    obj.calculate();
    obj.displayResult();
    return 0;
}