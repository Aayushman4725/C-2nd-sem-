#include <iostream>
#include <string.h>
using namespace std;

class College
{
    protected:
    char Name[50];
    char location[50];

    public:
    void input1()
    {
        cout<<"Enter name of College:";
        cin>>Name;
        cout<<"Enter location of College:";
        cin>>location;
    }

    College()
    {    
    }

    College(const char Cname[50],const char l[50])
    {
        strcpy(Name,Cname);
        strcpy(location,l);
    }

    void display1()
    {
        cout<<"Name of College:"<<Name<<endl<<"Location of College:"<<location<<endl;
    }
};

class Student:public College
{
    protected:
    char Name[50];
    int Rollno;

    public:
    void input2()
    {
        input1();
        cout<<"Enter the name of Student:";
        cin>>Name;
        cout<<"Enter the roll number of Student:";
        cin>>Rollno;
    }

    Student()
    {
    }

    Student(const char Cname[50],const char l[50], const char Sname[50],int r):College(Cname,l)
    {
        strcpy(Name,Sname);
        Rollno=r;
    }

    void display2()
    {
        display1();
        cout<<"Name of Student:"<<Name<<endl<<"Roll no:"<<Rollno<<endl;
    }
};

class Teacher:public College
{
    protected:
    char Name[50];
    int code;

    public:
    void input3()
    {
        cout<<"Enter name of Teacher:";
        cin>>Name;
        cout<<"Enter code of Teacher:";
        cin>>code;
    }

    Teacher()
    {
    }

    Teacher(const char Cname[50],const char l[50],const char Tname[50],int Ccode):College(Cname,l)
    {
        strcpy(Name,Tname);
        code=Ccode;
    }

    void display3()
    {
        cout<<"Name of Teacher"<<Name<<endl<<"Code of Teacher:"<<code<<endl;
    }
};

class Books:public Student,public Teacher
{
    protected:
    char Bookname[50];
     char writername[50];
    int code;

    public:
    void input4()
    {
        cout<<"Enter the name of book:";
        cin>>Bookname;
        cout<<"Enter the name of writer:";
        cin>>writername;
        cout<<"Enter code of book:";
        cin>>code;
    }

    Books()
    {
    }

    Books(const char Cname[50],const char l[50],const char Sname[50],int r,const char Tname[50],int Ccode,const char w[50],const char b[50],int bcode):Student(Cname,l,Sname,r),Teacher(Cname,l,Tname,Ccode)
    {
        strcpy(writername,w);
        strcpy(Bookname,b);
        code=bcode;
    }
    

    void display4()
    {
        display2();
        display3();
        cout<<"Book name:"<<Bookname<<endl<<"Writer name:"<<writername<<endl<<"Bookcode:"<<code<<endl;
    }
};


int main()
{
    Books b("NCIT","Balkumari","Aayushman",8,"Rabina",12345,"Thomas","OOP",456123);
    
  //  b.input2();
    //b.input3();
    //b.input4();
    b.display4();
    return 0;
}
