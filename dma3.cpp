#include <iostream>
using namespace std;

class Student
{
    char name[50];
    int roll;

    public:
    void set()
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
    Student *ptr=new Student;
    cout<<"\nThe information is"<<endl;
    ptr->set();
    ptr->display();

    delete ptr;
    ptr=NULL;
    return 0;
}