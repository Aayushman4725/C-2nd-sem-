#include <iostream>
#include <string.h>
using namespace std;

class Person
{
    protected:
    char Name[50];
    int code;

    public:
    Person()
    {
    }

    Person(const char Pname[50],int c)
    {
        strcpy(Name,Pname);
        code=c;
    }

    void display()
    {
        cout<<"Name:"<<Name<<endl<<"Code:"<<code<<endl;
    }
};

class Admin: public Person
{
    protected:
    int No_of_years_of_experience;

    public:
    Admin()
    {
    }

    Admin(const char Pname[50],int c,int n): Person(Pname,c)
    {
        No_of_years_of_experience=n;
    }

    void display2()
    {
        display();
        cout<<"No of years of experience: "<<No_of_years_of_experience<<endl;
    }
};

class Account: public Person
{
    protected:
    int Salary;

    public:
    Account()
    {
    }

    Account(const char Pname[50],int c,int s):Person(Pname,c)
    {
        Salary=s;
    }

    void display3()
    {
        cout<<"Salary:"<<Salary<<endl;
    }
};

class Record:public Admin,public Account
{
    int RecordNo;

    public:
    Record()
    {
    }

    Record(const char Pname[50],int c,int n,int s,int r):Admin(Pname,c,n),Account(Pname,c,s)
    {
        RecordNo=r;
    }

    void display4()
    {
        display2();
        display3();
        cout<<"Record No:"<<RecordNo<<endl;
    }
};

int main()
{
    Record r("Aayushman",123,4,40000,608);
    r.display4();
    return 0;
}