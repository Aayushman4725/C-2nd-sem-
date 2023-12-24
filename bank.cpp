#include <iostream>
#include<string.h>
using namespace std;

class Bank
{
    char name[50];
    int accnum;
    int balance;
    int size;

    public:

    Bank()
    {
      
        {
        cout<<"Enter your name:";
        cin>>name;
        cout<<"Enter account number:";
        cin>>accnum;
        cout<<"Enter account balance:";
        cin>>balance;
        }
    }

    Bank( const char *n,int num,int b)
    {
        strcpy(name,n);
        accnum=num;
        balance=b;
    }

    void depositWithdraw()
    {
        int deposit,withdraw;
        char choice;
        cout<<"Enter d if want to deposit money and Enter w if want to withdraw money:";
        cin>>choice;

        if(choice =='d')
        {
            cout<<"Enter the amount of money that you want to deposit:";
            cin>>deposit;
            cout<<"Rs"<<deposit<<"has been deposited to your account."<<endl;
            cout<<"Your current balance is:"<<(balance+deposit)<<endl;
        }

        else if(choice =='w')
        {
            cout <<"Enter the amount of money that you want to withdraw:";
            cin>>withdraw;
            cout<<"Rs"<<withdraw<<"has been withdrawn to your account."<<endl;
            cout<<"Your current balance is:"<<(balance+withdraw)<<endl;
        }

        else
        {
            cout<<"error";
        }
        
        
    }


    void display()
    {
        cout<<"Name:"<<name<<endl<<"Account number:"<<accnum<<endl<<"Balance:"<<balance<<endl;   
    }
};

int main()
{
    int size,i;
      cout<<"Enter the number of customers:";
     cin>>size;
     Bank b1[2];
     for(i=0;i<=size-1;i++)
    {
    Bank b1[i];
    }
    Bank b2("Aayushman",3479374,400000);
    for(i=0;i<=size-1;i++)
    {
    b1[i].display();
    }
    b2.display();
    for(i=0;i<=size-1;i++)
    {
    b1[i].depositWithdraw();
    }
    b2.depositWithdraw();
    return 0;
}