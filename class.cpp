#include<iostream>
using namespace std;

class Person
{
	char name[50];
	int age;
	int height;
	char phone[11];
	
	
	public:
		void setdetails();
		void displaydetails();
};

void Person :: setdetails()
{
	cout<<"Enter name:";
	cin>>name;
	
	cout<<"Enter age:";
	cin>>age;

    cout<<"Enter height:";
    cin>>height;

    cout<<"Enter contact:";
    cin>>phone;
}

void Person::displaydetails()
{
    cout<<"Name:"<<name<<endl<<"Age:"<<age<<endl<<"Height:"<<height<<endl<<"Contact:"<<phone<<endl;

}

int main()
{
    Person p1;
    p1.setdetails();
    p1.displaydetails();
    return 0;
}