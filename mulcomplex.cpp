#include <iostream>
using namespace std;
class Complex;

class Mul
{
    public:
    void mulComplex(Complex,Complex);
};

class Complex
{
    int img,real;

    public:
    void setdetails();
    friend class Mul;
};

int main()
{
    Complex c1,c2;
    Mul c3;
    c1.setdetails();
    c2.setdetails();
    c3.mulComplex(c1,c2);
    return 0;
}

void Mul::mulComplex(Complex a,Complex b)
{
    Complex result;
    result.real=(a.real*b.real)+(a.img*b.img)*(-1);
    result.img=(a.real*b.img)+(b.real*a.img);
    cout<<endl<<"The resultant real number is:"<<result.real<<"+"<<result.img<<"i"<<endl;
    
}

void Complex::setdetails()
{
    cout<<"Enter the real number:";
    cin>>real;
    cout<<"Enter the imaginary number:";
    cin>>img;
}