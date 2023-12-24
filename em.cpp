#include<iostream>
#include<string.h>
using namespace std;
class Person
{
    protected:
    char name[50];
    int age;
    public:
    Person() 
    {
    }
    Person(const char name[],int age)
    {
        strcpy(this->name,name);
        this->age = age;
    }
    void displayPerson()
    {
        cout <<"Name: "<<name<<"\nAge: "<<age<<endl;
    }
};
class Student:public Person
{
    int roll,reg;
    public:
    Student() 
    {
    }
    Student(const char name[],int age, int roll,int reg)
    {
        this->roll = roll;
        this->reg = reg;
    }
    void displayStudent()
    {
        displayPerson();
        cout<<"Roll: "<<roll<<endl;
        cout<<"Registration: "<<reg<<endl;
    }
};
class Employee: public Person
{
    int id,salary;
    public:
    Employee()
    {
    }

    Employee( const char name[],int age,int id,int salary)
    {
        this->id =id;
        this->salary =salary;
    }
    void displayEmployee()
    {
        displayPerson();
        cout<<"ID: "<<id<<endl;
        cout<<"Salary: "<<salary<<endl;
    }
};
int main()
{
    Student S("Akhil",19,11,211611);
    S.displayPerson();
    S.displayStudent();

    Employee E("Someone",19,1111,100000);
    E.displayPerson();
    E.displayEmployee();
    return 0;
}