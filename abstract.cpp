#include <iostream>
using namespace std;

class Shape
{
    protected:
    int width,height;
    float area;

    public:

    void setWidth()
    {
        cout<<"Enter width and height:";
        cin>>width>>height;
    }

    virtual void CalculateArea()=0;
};

class Rectangle:public Shape
{
    public:

    void CalculateArea()
    {
        area=width*height;
        cout<<"Area of rectangle is "<<area<<endl;
    }
};

class Triangle:public Shape
{
    public:
    void CalculateArea()
    {
        area=(1/2.0)*width*height;
        cout<<"Area of triangles is "<<area<<endl;
    }    
};

int main()
{
    Shape *sptr;
    Rectangle robj;
    Triangle tobj;
    sptr=&robj;
    cout<<"Enter dimensions of Rectangle:\n";
    sptr->setWidth();
    sptr->CalculateArea();
    sptr=NULL;
    cout<<"Enter dimensions of Triangle\n";
    sptr=&tobj;
    sptr->setWidth();
    sptr->CalculateArea();
    sptr=NULL;
    return 0;
}