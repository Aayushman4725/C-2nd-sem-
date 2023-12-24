#include <iostream>
using namespace std;

class Person
{
    protected:
    char name[50];
    int age;

    public:
    void setPerson()
    {
        cout<<"Enter name:";
        cin>>name;

        cout<<"Enter age:";
        cin>>age;
    }

    void displayPerson()
    {
        cout<<"Name"<<name<<endl<<"Age: "<<age<<endl;
    }
};

class Student:public Person
{
    protected:
    int roll;

    public:
    void setStudent()
    {
        cout<<"Enter roll no:";
        cin>>roll;
    }

    void displayStudent()
    {
        cout<<"Roll no:"<<roll<<endl;
    }
};

class Examination:public Student
{
    protected:
    int practicalMarks;
    int theoryMarks;

    public:
    void setExam()
    {
        cout<<"Enter theory marks:";
        cin>>theoryMarks;
        cout<<"Enter practical marks:";
        cin>>practicalMarks;
    }

    void displayExam()
    {
        cout<<"Practical marks:"<<practicalMarks<<endl<<"Theoretical marks:"<<theoryMarks<<endl;
    }
};

class Result:public Examination
{
    protected:
    int totalMarks;

    public:
    void CalculateResults()
    {
        totalMarks=practicalMarks+theoryMarks;
    }

    void displayResult()
    {
        cout<<"Total marks: "<<totalMarks<<endl;
    }
};

class Employee:public Person
{
    protected:
    char designation[50];
    int id;
    int salary;

    public:
    void setEmployee()
    {
        cout<<"Enter designation:";
        cin>>designation;
        cout<<"Enter salary:";
        cin>>salary;
    }

    void displayEmployee()
    {
        cout<<"Designation:"<<designation<<endl<<"ID:"<<id<<endl<<"Salary:"<<salary<<endl;
    }
};

int main()
{
    Result r1;
    r1.setPerson();
    r1.setStudent();
    r1.setExam();
    r1.CalculateResults();
    r1.displayPerson();
    r1.displayStudent();
    r1.displayExam();
    r1.displayResult();
    Employee e1;
    e1.setPerson();
    e1.setEmployee();
    e1.displayPerson();
    e1.displayEmployee();
    return 0;
}