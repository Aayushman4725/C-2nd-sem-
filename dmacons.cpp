#include <iostream>
using namespace std;

class Test
{
int *x,*y;

public:
Test()
{
    x=new int;
    y=new int;

    *x=0;
    *y=0;
}

Test(int a,int b)
{
    x=new int;
    y=new int;
    *x=a;
    *y=b;
}

Test(Test &T)
{
    x=new int;
    y=new int;  
    *x=*(T.x);
    *y=*(T.y); 
}

void display()
{
    cout<<"\nValue at address pointed by x:"<<*x<<endl;
    cout<<"\nValue at address pointed by y:"<<*y<<endl;
}

~Test()
{
    delete x;
    delete y;
    cout<<"\nDestructor called."<<endl;
}
};

int main()
{
    Test tobj1;
    Test tobj2(100,509);
    Test tobj3(tobj2);

    tobj1.display();    
    tobj2.display();
    tobj3.display();
    return 0;

}