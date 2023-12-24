#include <iostream>
using namespace std;

class Distance
{
    int km,m;

    public:
    Distance()
    {
    }


    Distance(int k,int me)
    {
        km=k;
        m=me;
    }

    void operator --(int) //post decrement
    {
        km=km--;
        m=m--;
    }

    void operator --() //pre decrement
    {
        km=--km;
        m=--m;
    }

    void display()
    {
        cout<<"\nKm"<<km<<"\nm"<<m<<endl;
    }
};

int main()
{
    Distance d1(20,200);
    d1.display();
    d1.operator --();
    cout<<"\nAfter pre decrement operation"<<endl;
    d1.display();
    d1.operator -- (0);
    cout<<"\nAfter post decrement operation"<<endl;
    d1.display();
    return 0;
}