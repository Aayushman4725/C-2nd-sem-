#include <iostream>
using namespace std;

class Complex;
void add(Complex,Complex);

class Complex
{
    int real,img;

    public:
    void setdetails();
    void displaydetails();
    friend void add(Complex,Complex);
};

int main()
{
    Complex c1,c2;
    c1.setdetails();
    c1.displaydetails();
    c2.setdetails();
    c2.displaydetails();
    add(c1,c2);
    return 0;
}

void add(Complex a,Complex b)
{
    Complex result;
    result.real=a.real+b.real;
    result.img=a.real+b.img;
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

void Complex::displaydetails()
{
    cout<<endl<<"Real nmumber:"<<real<<endl;
    cout<<endl<<"Imaginary number:"<<img;
}