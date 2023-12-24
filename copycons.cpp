#include <iostream>
using namespace std;

class Add
{
    int a,b,c,addition;
    
    public:
    void add(Add,Add,Add);
    void display();
    Add()
    {
       cout<<"Enter the value of a:";
       cin>>a;
    }
    Add(int x)
    {
      b=x;  
    }
    Add(Add &e)
    {
        c=e.c;
    }
};

void Add::display()
{
    cout<<"The addition is"<<addition;
}

void Add::add(Add a,Add b,Add c)
{
    
  addition=a+b+c;  
}

int main()
{
    Add a1;
    Add a2(3);
    Add a3(a2);
    Add a4;
    a4.add(a1,a2,a3);
    a4.display();
    return 0;
}