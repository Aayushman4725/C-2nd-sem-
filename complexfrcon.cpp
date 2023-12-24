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
    Complex()
    {
    }
    Complex(int i,int r)
    {
        img=i;
        real=r;
    }
    friend class Add;
};

void Add::addComplex(Complex a,Complex b)
{
            Complex result;
        result.real=a.real+b.real;
        result.img=a.img+b.img;
        cout<<endl<<"The resultant real number is:"<<result.real<<endl;
        cout<<"The resultant imaginary number is:"<<result.img<<endl;
}

int main()
{
    Complex c1(10,20);
    Complex c2(30,40);
    Add c3;
    c3.addComplex(c1,c2);
    return 0;
}