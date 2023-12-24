#include <iostream>
using namespace std;

class Complex
{
    int img,real;

    public:
    void setcomplex();
    void displaycomplex();
    Complex addcomplex(Complex);
};

void Complex::setcomplex()
{
    cout<<"Enter real number:";
    cin>>real;
    cout<<"Enter imaginary number:";
    cin>>img;
}

void Complex::displaycomplex()
{
    cout<<"Real:"<<real<<endl<<"Imaginary:"<<img<<endl;
}

Complex Complex::addcomplex(Complex c2)
{
    Complex result;
    result.img=img+c2.img;
    result.real=real+c2.real;
    
    return result;
}

int main()
{
Complex c1,c2,c3;
cout<<"Enter the first complex number:"<<endl;
c1.setcomplex();

cout<<"Enter the second complex:"<<endl;
c2.setcomplex();

cout<<"The complex number are:"<<endl;
c1.displaycomplex();
c2.displaycomplex();

cout<<"The resultant complex number is:"<<endl;
c3=c1.addcomplex(c2);
c3.displaycomplex();
return 0;
}
