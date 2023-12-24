#include <iostream>
using namespace std;

class Person
{
    protected:
    char name[50];
    int age;

  
};

class Student:public Person
{
    protected:
    int id;
    int reg;
    int result;
      public:
    void set()
    {
        cout<<"Enter name:";
        cin>>name;
        cout<<"Enter age:";
        cin>>age;
        cout<<"Entr ID:";
        cin>>id;
        cout<<"Enter registration number:";
        cin>>reg;
        cout<<"Enter result:";
        cin>>result;
    }
    void display()
    {
        cout<<"Name:"<<name<<endl<<"Age:"<<age<<endl<<"ID:"<<id<<endl<<"reg:"<<reg<<endl<<"result:"<<result<<endl;
    }

};

int main()
{
    Student s1;
    s1.set();
    s1.display();
    return 0;
}