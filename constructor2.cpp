#include <iostream>
using namespace std;

class Time
{
    int hour,min,sec;
    
    public:
    void display();
    void addTime(Time,Time);
    Time();
    Time(int,int,int);
};

Time::Time()
{
    hour=0;
    min=0;
    sec=0;
}

Time::Time(int h,int m,int s)
{
    hour=h;
    min=m;
    sec=s;
}

void Time::addTime(Time t1,Time t2)
{
    sec=t1.sec+t2.sec;
    min=sec/60;
    sec=sec%60;
    min+=t1.min+t2.min;
    hour=min/60;
    min=min%60;
    hour+=t1.hour+t2.hour;
}

void Time::display()
{
    cout<<"The time is:"<<endl<<"Hour:"<<hour<<endl<<"Minute:"<<min<<endl<<"Second:"<<sec<<endl;
}

int main()
{
    Time t3;
    Time t1(5,600,80);
    Time t2(6,500,600);
    t1.display();
    t2.display();
    t3.addTime(t1,t2);
    t3.display();
    return 0;
}