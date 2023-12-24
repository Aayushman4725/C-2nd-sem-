#include <iostream>
using namespace std;

class Address
{
    protected:

    char country[50],municipality[50];
    int province,ward;

    public:
    void setAddress()
    {
        cout<<"Enter country name:";
        cin>>country;
        cout<<"Enter municipality name:";
        cin>>municipality;
        cout<<"Enter province number:";
        cin>>province;
        cout<<"Enter ward number:";
        cin>>ward;
    }

    void display()
    {
        cout<<"Country:"<<country<<endl<<"Municipality:"<<municipality<<endl<<"Province:"<<province<<endl<<"Ward No:"<<ward<<endl;
    }
};

class Student:public Address
{
    Address a;
    char name[50];

    public:
    void setStudent()
    {
        cout<<"Enter name:";
        cin>>name;
        a.setAddress();
    }

    void displayStudent()
    {
        cout<<"\n\n\nName:"<<name<<endl;
        a.display();

    }
};

int main()
{
    Student s;
    s.setStudent();
    s.displayStudent();
    return 0;
}