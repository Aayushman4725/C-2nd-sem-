#include <iostream>
using namespace std;

class Test
{
    int x,y;

    public:
    Test()
    {
        cout<<"Default Constructor:"<<endl;
        x=0;
        y=0;
    }

    Test(int a,int b)
    {
        cout<<"Paramterized Constructor:"<<endl;
        x=a;
        y=b;
    }

    void display()
    {
        cout<<"x:"<<x<<endl;
        cout<<"y:"<<y<<endl;
    }

    ~Test()
    {
        cout<<"Destructor called"<<endl;
    }
};


int main()
{
    Test *ptr=new Test;
    Test *ptr2=new Test(100,599);

    ptr->display();
    ptr2->display();

    delete ptr2;
    ptr2=NULL;

    delete ptr;
    ptr=NULL;

    return 0;
}