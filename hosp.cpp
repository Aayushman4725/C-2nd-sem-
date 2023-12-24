#include <iostream>
using namespace std;

struct Date
{
    int day,month,year;
};
struct Person
{   
    private:
    char name[50];
    int age;
    char gender[10];
    int bed;
    char illness[50];
    Date dob;
    Date doa;
    int ward;
    

    public:
    void setdetails();
    void displaydetails();
};

void Person::setdetails()
{
    cout<<"Enter name:";
    cin>>name;
    cout<<"Enter age:";
    cin>>age;
    cout<<"Enter Date of birth:";
    cout<<endl<<"day:";
    cin>>dob.day;
    cout<<"month:";
    cin>>dob.month;
    cout<<"year:";
    cin>>dob.year;
    cout<<"Enter nature of illness:";
    cin>>illness;
    cout<<"Enter Ward No.:";
    cin>>ward;
    cout<<"Enter gender:";
    cin>>gender;
    cout<<"Enter date of admission:";
    cout<<endl<<"day:";
    cin>>doa.day;
    cout<<"month:";
    cin>>doa.month;
    cout<<"Year:";
    cin>>doa.year;
    
}

void Person::displaydetails()
{
    cout<<"Patient Name:"<<name<<endl;
    cout<<"Age:"<<age<<endl;
    cout<<"Bed No.:"<<bed<<endl;
    cout<<"Nature of illness"<<illness<<endl;
    cout<<"Date of Birth:"<<endl<<"day:"<<dob.day<<endl<<"month:"<<dob.month<<endl<<"year:"<<dob.year<<endl;
    cout<<"Gender:"<<gender<<endl;
    cout<<"Ward no:"<<ward<<endl;
    cout<<"Date of admission:"<<endl<<"day:"<<doa.day<<endl<<"month:"<<doa.month<<endl<<"year:"<<doa.year;
}

int main()
{
    Person p1;
    p1.setdetails();
    p1.displaydetails();
    return 0;
}


