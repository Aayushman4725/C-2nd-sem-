#include <iostream>
using namespace std;

class Rectangle
{
    protected:
    int length,breadth;

    public:

    Rectangle()
    {    
    }

    Rectangle(int l,int b)
    {
        length = l;
        breadth=b;
    }

    void Area()
    {
        cout<<"Area:"<<(length*breadth)<<endl;
    }
};

class Box:public Rectangle
{
    int height;

    public:
    Box()
    {
    }

    Box(int l,int b,int h):Rectangle(l,b)
     {
        length=l;
        breadth=b;
        height=h;
    }

    void Volume()
    {
        cout<<"Volume:"<<(length*breadth*height)<<endl;
    }
};

int main()
{
    Box b1(10,20,30);
    b1.Area();
    b1.Volume();
}