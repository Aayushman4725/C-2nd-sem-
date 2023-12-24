#include <iostream>
using namespace std;

class Complex
{
    int real,img;

    public:

    Complex()
    {}

    Complex(int i,int r)
    {
        real=r;
        img=i;
    }
     Complex operator-()
    {
        Complex result;
        result.real=-real;
        result.img=-img;
        return result;
    }

    void display()
    {
        cout<<"\nReal: "<<real<<"\nimg: "<<img<<endl;
    }
};

int main()
{
    Complex c1(10,20),c2;
    c1.display();
    c2=-c1;
    cout<<"After negetion operation:\n\n\n";
    c2.display();
    return 0;

}