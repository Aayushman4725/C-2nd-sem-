#include <iostream>
using namespace std;

class Mul
{
    int n1;

    public:
    Mul()
    {}

    Mul(int num1)
    {
        n1=num1;
    }

    void operator*(Mul n)
    {
        n1=n1*n.n1;
    
    }

    void display()
    {
        cout<<"The number is:"<<n1;
    }

};

int main()
{
    Mul m1(3),m2(5),m3;
    m3=m1*m2;
    m3.display();
    return 0;
}