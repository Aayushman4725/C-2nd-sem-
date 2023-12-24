#include <iostream>
using namespace std;

class Student
{
    private:
    char name[50];
    char address[50];
    int age;
    int roll;
    static int count;

    public:
    void setdetails();
    void displaydetails();
    void displaycount();
};

void Student::setdetails()
{
cout<<"Enter name:";
cin>>name;
cout<<"Enter address:";
cin>>address;
cout<<"Enter roll no:";
cin>>roll;
cout<<"Enter age:";
cin>>age;
count++;
}

void Student::displaydetails()
{
    cout<<"Name:"<<name<<endl<<"Address:"<<address<<endl<<"Roll no:"<<roll<<endl<<"Age:"<<age<<endl;
}

void Student::displaycount()
{
    cout<<"Count:"<<count<<endl;
}

int Student::count=0;

int main()
{
Student s1,s2,s3;
s1.setdetails();
s1.displaydetails();
s2.setdetails();
s2.displaydetails();
s3.setdetails();
s3.displaydetails();
s3.displaycount();
return 0;
}