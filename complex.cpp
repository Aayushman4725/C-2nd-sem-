#include <iostream>
using namespace std;

class Complex
{
    int real,img;

    public:
    void setcomplex();
    void displaycomplex();
    void addcomplex(Complex,Complex);
};

void Complex::setcomplex()
{
    cout<<"Enter imaginary number:";
    cin>>img;
    cout<<"Enter real number:";
    cin>>real;
}

void Complex::displaycomplex()
{
    cout<<"imaginary:"<<img<<endl<<"Real:"<<real<<endl;
}

void Complex::addcomplex(Complex c1,Complex c2)
{
    img=c1.img+c2.img;
    real=c1.real+c2.real;
}

int main()
{
    Complex c1,c2,c3;
    
    cout<<"Enter the first complex number:"<<endl;
    c1.setcomplex();
    
    cout<<endl<<"Enter the second complex number:"<<endl;
    c2.setcomplex();

    cout<<"The complex numbers are:"<<endl;
    c1.displaycomplex();
    c2.displaycomplex();

    cout<<"The resultant complex number is:"<<endl;
    c3.addcomplex(c1,c2);
    c3.displaycomplex();

    return 0;
}