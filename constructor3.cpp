#include <iostream>
using namespace std;

class BankCostumer
{
    int principle,time,rate,SI;

    public:
    void display();
    void SIamt();
    BankCostumer();
    BankCostumer(int,int,int);
};

BankCostumer::BankCostumer()
{
    principle=0;
    time=0;
    rate=9;
}

BankCostumer::BankCostumer(int p,int t,int r=9)
{
    principle=p;
    time=t;
    rate=r;
}
/*
void BankCostumer::display()
{
    cout<<"SI:"<<SI<<endl;
}
*/
void BankCostumer::SIamt()
{
   SI=(principle*time*rate)/(100);
   cout<<"SI:"<<SI;
}

int main()
{
    cout<<"\nFor default rate:\n";
    BankCostumer b1(60000,5);
    b1.SIamt();

    cout<<"\nFor user specified rate:\n";
    BankCostumer b2(60000,5,10);
    b2.SIamt();
    
    return 0;
}