#include <iostream>
using namespace std;

class Distance
{
    int km,m;

    public:
    void display();
    Distance();
    Distance(int,int);
    void addDistance(Distance,Distance);
};

void Distance::display()
{
    cout<<"The distance is:"<<km<<"km"<<" and "<<m<<"m"<<endl;
}

Distance::Distance()
{
    km=0;
    m=0;
}

Distance::Distance(int k,int meter)
{
    km=k;
    m=meter;
}

void Distance::addDistance(Distance d1,Distance d2)
{
    m=d1.m+d2.m;
    km=m/1000;
    m=m%1000;
    km+=d1.km+d2.km;
}

int main()
{
    Distance d3;
    Distance d1(5,1250);
    Distance d2(10,34560);
    d3.addDistance(d1,d2);
    d3.display();
    return 0;
}