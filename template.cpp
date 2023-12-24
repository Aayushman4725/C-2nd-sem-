#include <iostream>
using namespace std;

template<typename T>

    void swap(T& a,T& b)
    {
        T temp;
        temp=a;
        a=b;
        b=temp;
    }


int main()
{
    int x=3,y=5;
     cout<<"x: "<<x<<endl<<"y: "<<y<<endl;
    swap(x,y);
     cout<<"x: "<<x<<endl<<"y: "<<y<<endl;
    double a=4.3,b=2.3;
     cout<<"a: "<<a<<endl<<"b: "<<b<<endl;
    swap(a,b);
    cout<<"a: "<<a<<endl<<"b: "<<b<<endl;
    return 0;
}