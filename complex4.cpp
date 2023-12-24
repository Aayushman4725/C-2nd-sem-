#include <iostream>
using namespace std;
class Complex;
class Add
{
    public:
    void addComplex(Complex,Complex);
};

class Complex
{
    int img,real;

    public:
    void setdetails();
    friend  class Add;
};

int main()
{
    Complex c1,c2;
    Add c3;
    c1.setdetails();
    c2.setdetails();
    c3.addComplex(c1,c2);
    return 0;
}

void Add::addComplex(Complex a,Complex b)
{
    Complex result;
    result.real=a.real+b.real;
    result.img=a.img+b.img;
    cout<<endl<<"The resultant real number is:"<<result.real<<endl;
    cout<<"The resultant imaginary number is:"<<result.img<<endl;
}

void Complex::setdetails()
{
    cout<<"Enter the real number:";
    cin>>real;
    cout<<"Enter the imaginary number:";
    cin>>img;
}