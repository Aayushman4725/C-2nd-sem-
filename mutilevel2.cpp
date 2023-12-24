#include <iostream>
using namespace std;

class Student
{
    protected:
    char name[50];
    int roll;

    public:
    void input()
    {
        cout<<"Enter name: ";
        cin >> name;
        cout<<"Enter roll no: ";
        cin >> roll;
    }

    void display()
    {
        cout<<"Name:"<<name<<endl<<"Roll: "<<roll<<endl;
    }
};

class Examination: public Student
{
    protected:
    int cpp,lc,wt,math,drawing,mfcs;

    public:
    void subject()
    {
        cpp=80;
        lc=75;
        wt=60;
        math=65;
        drawing=80;
        mfcs=60;
    }
};

class Result:public Examination
{
    protected:
    int total;

    public:
    void calculate()
    {
        total=cpp+lc+wt+drawing+mfcs+math;
    }

    void displayResult()
    {
        cout<<"Total: "<<total<<endl;
    }
};

int main()
{
    Result r1;
    r1.input();
    r1.subject();
    r1.calculate();
    r1.display();
    r1.displayResult();
    return 0;
}