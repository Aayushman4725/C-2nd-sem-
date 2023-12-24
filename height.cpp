#include <iostream>
using namespace std;

class Height;

class Add
{
    public:
    void add(Height,Height);
};

class Height
{
    int ft,in;

    public:
    Height()
    {
    }

    Height(int feet,int inch)
    {
        ft=feet;
        in=inch;
    }

    void display()
    {
        cout<<"The Height is"<<ft<<"feet and"<<in<<"inch"<<endl;
    }   
    friend class Add;
};

void Add::add(Height d1,Height d2)
{
    Height d3;
    d3.in=d1.in+d2.in;
    d3.ft=d3.in/12;
    d3.in=d3.in%12;
    d3.ft+=d1.ft+d2.ft;
    d3.display();
}

int main()
{
    Height d1(5,5);
    Height d2(5,2);
    Add d3;
    d3.add(d1,d2);
    return 0;
}