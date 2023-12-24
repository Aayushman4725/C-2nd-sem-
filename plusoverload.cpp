#include <iostream>
using namespace std;

class Complex
{
    int real,img;

    public:
    Complex()
    {}

    Complex(int r,int i)
    {
        real=r;
        img=i;
    }

    void display()
    {
        cout<<"The number is:"<<real<<"+i"<<img<<endl;
    }

    Complex operator+(Complex c1)
    {
        Complex temp;
        temp.real=real+c1.real;
        temp.img=img+c1.img;
        return temp;
    }
};

int main()
{
    Complex c1(12,23),c2(15,14),c3;
    c3=c1+c2;
    c3.display();
    return 0;
}