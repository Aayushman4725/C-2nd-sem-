#include <iostream>
using namespace std;
void swap(int &a,int &b)
{
a=6;
b=7;
cout<<"value of a"<<a<<endl;
cout<<"value of b"<<b<<endl;
cout<<"address of a:"<<&a<<endl;
cout<<"address of b:"<<&b<<endl;
int temp;
temp=a;
a=b;
b=temp;
}

int main()
{
    int x,y;
    x=29;
    y=47;
    cout<<"value of x before function call:"<<x<<endl;
    cout<<"value of y before function call:"<<y<<endl;

    swap(x,y);
    cout<<"value of x after function call:"<<x<<endl;
    cout<<"value of y after function call:"<<y<<endl;
    cout<<"address of x:"<<&x<<endl;
    cout<<"address of y:"<<&y<<endl;
    return 0;
}