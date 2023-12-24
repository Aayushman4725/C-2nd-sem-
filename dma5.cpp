#include <iostream>
using namespace std;

class Employee
{
    int id,phone;
    char name[50];

    public:
    void set()
    {
        cout<<"Enter name:";
        cin>>name;
        cout<<"Enter id:";
        cin>>id;
        cout<<"Enter phone number:";
        cin>>phone;
    }

    void display()
    {
        cout<<"Name:"<<name<<endl<<"ID:"<<id<<endl<<"Phone no:"<<phone<<endl;
    }
};

int main()
{
   int size,i;
   Employee *ptr=NULL;
   cout<<"Enter size";
   cin>>size;
   ptr=new Employee[size];

   for(i=0;i<=size-1;i++)
   {
    cout<<"Enter details of Employee:"<<i+1<<endl;
    (ptr+i)->set();
   }

   for(i=0;i<=size-1;i++)
   {
    cout<<"Details of Employee"<<i+1<<endl;
    (ptr+i)->display();
   }

   delete[]ptr;
   ptr=NULL;
   return 0;

}

