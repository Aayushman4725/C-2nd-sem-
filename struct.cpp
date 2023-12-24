#include<iostream>
using namespace std;

struct Phone
{
    public:

    char area[10];
    char exchange[10];
    char num[10];

    

    void setdetails();
    void displaydetails();
    void details();
    void display();
    
};


void Phone::display()
{
	cout<<"My number is (212)787-8900 ";
}

void Phone::setdetails()
{
    cout<<"Enter area code,exchange,num:";
    cin>>area>>exchange>>num;
}

void Phone::displaydetails()
{
    cout<<"Your number is "<<"("<<area<<")"<<exchange<<"-"<<num;
}


int main()
{
    Phone p1,p2;
    p1.setdetails();
    p1.displaydetails();
    p2.display();
    return 0; 
}
