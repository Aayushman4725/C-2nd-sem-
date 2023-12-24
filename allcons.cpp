#include<iostream>
using namespace std;
class XYZ
{
    int x,y;
    public:
    XYZ();
    XYZ(int x, int y);
    XYZ(XYZ &);
    void display();
};
XYZ::XYZ()
{
    x=0;
    y=0;
}
XYZ::XYZ(int a, int b)
{
    x=a;
    y=b;
}
XYZ::XYZ(XYZ &j)
{
    cout<<"Copy constructor here"<<endl;
    x=j.x;
    y=j.y;
}
void XYZ::display()
{
    cout<<"Display the value of x and y"<<endl;
    cout<<"x= "<<x<<" and y= "<<y<<endl;
}
int main()
{
    XYZ X;
    X.display();
    XYZ Y(10,200);
    Y.display();
    XYZ Z(Y);
    Z.display();
    return 0;
}