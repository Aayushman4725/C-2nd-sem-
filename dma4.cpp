#include <iostream>
using namespace std;

class Student
{
    char name[50];
    int roll;

    public:
    void  set()
    {
        cout<<"Enter name:";
        cin>>name;
        cout<<"Enter Roll no:";
        cin>>roll;
    }

    void display()
    {
        cout<<"Name:"<<name<<endl<<"Roll no:"<<roll<<endl;
    }
};

int main()
{
    int size,i;
    Student *ptr=NULL;
    cout<<"Enter size:";
    cin>>size;
    ptr=new Student[size];

    for(i=0;i<=size-1;i++)
    {
        cout<<"Enter the details of student "<<i+1<<endl;
        (ptr+i)->set();
    }

    for(i=0;i<=size-1;i++)
    {
        cout<<"\nDetails of Student "<<i+1<<endl;
        (ptr+i)->display();
    }

    delete[]ptr;
    ptr=NULL;
    return 0;
}