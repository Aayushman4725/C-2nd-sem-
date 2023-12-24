#include <iostream>
using namespace std;

class Complex
{
    int real,img;

    public:
    void display();
    void addComplex(Complex,Complex);
     Complex();
     Complex(int,int);
};

 Complex::Complex()
{
    real=0;
    img=0;
}

 Complex::Complex(int r,int i)
{
    real=r;
    img=i;
}

void Complex::addComplex(Complex c1,Complex c2)
{
    real=c1.real+c2.real;
    img=c1.img+c2.img;
}

int main()
{
    Complex c3;
    Complex c1(5,6);
    Complex c2(7,8);
    c1.display();
    c2.display();
    c3.addComplex(c1,c2);
    c3.display();
    return 0;
}

void Complex::display()
{
    cout<<"The real number is:"<<real<<endl<<"The imaginary number is:"<<img<<endl;
}