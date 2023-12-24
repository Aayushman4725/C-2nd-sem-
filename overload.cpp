#include <iostream>
using namespace std;

class One
{
    int real,img;

    public:
    One()
    {
    }

    One(int r,int i)
    {
        real = r;
        img = i;
    }

    void display()
    {
        cout<<"The sum is:"<<real<<"+"<<"i"<<img<<endl;
    }

    One operator+(One c)
    {
        One temp;
        temp.real=real+c.real;
        temp.img=img+c.img;
        return temp;
    }
    
};

int main()
{
    One c1(10,20),c2(20,30),c3;
    c3=c1+c2;
    c3.display();
    return 0;
}