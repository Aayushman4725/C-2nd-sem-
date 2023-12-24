#include <iostream>
using namespace std;

class Complex
{
    int real,img;

    public:
    Complex()
    {
    }

    Complex(int r,int i)
    {
        real = r;
        img = i;
    }

    void operator -()
    {
        real = -real;
        img = -img;
    }

    void display()
    {
        cout<<"\nreal:"<<real<<"\nimg:"<<img<<endl;
    }
};

int main()
{
    Complex c1(10,20);
    c1.display();
    -c1; //c1.operator -();
    cout<<"\nAfte negation operation\n";
    c1.display();
    return 0;
}