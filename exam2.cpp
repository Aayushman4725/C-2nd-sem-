#include <iostream>
using namespace std;

class Time
{
    
    
    public:
    int hour,minute,second;
    Time()
    {
        hour=0;
        minute=0;
        second=0;
    }
    Time(int hour, int minute, int second)
    {
        this->hour=hour;
        this->minute=minute;
        this->second=second;
    }
    void display()
    {
        cout<<"Hour = "<<hour;
        cout<<endl<<"Minute = "<<minute;
        cout<<endl<<"Second = "<<second;
    }
};

class Derived:public Time
{   
    
    
    public:
    int total;
    void ask()
    {
        cout<<endl<<"Enter the time in seconds: ";
        cin>>total;
    }
    friend Derived operator+(Time, int);
};

Derived operator+(Time t1,int total)
{
    Derived temp;

    temp.hour = total/3600 + t1.hour;
    temp.minute = (total % 3600) / 60 + t1.minute;
    temp.second = ((total % 3600)%60) + t1.second;
    return temp;
}

class Compare
{
    
    public:
    int hour,minute,second;
    void displaydiff()
    {
        cout<<"\nThe Difference is: ";
        cout<<"\nHour: "<<hour;
        cout<<"\nMinute: "<<minute;
        cout<<"\nSecond: "<<second;
    }
    friend class Derived;
    friend Compare operator-(Time, Derived);
};
Compare operator-(Time t1, Derived d1)
{
    Compare tempo;
    tempo.hour = d1.hour - t1.hour;
    tempo.second = d1.second - t1.second;
    tempo.minute = d1.minute - t1.minute;
    return tempo;
}



int main()
{
    Derived d1;
    Time t1(7,50,500);
    Compare c1;
    d1.ask();
    d1 = t1 + d1.total;
    d1.display();
    c1 = t1 - d1;
    c1.displaydiff();
    
    return 0;
}