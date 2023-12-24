#include <iostream>
using namespace std;

class Time
{
    protected:
    int hour,min,sec;

    public:
    void setTime()
    {
        cout<<"Enter hour,min,sec:";
        cin>>hour>>min>>sec;
    }

    void displayTime()
    {
        cout<<"Hour: "<<hour<<"\nMin: "<<min<<"\nSec: "<<sec<<endl;
    }
};



class AddTime:public Time
{


    public:
    AddTime()
    {
    }

    AddTime(int h,int m,int s)
    {
        hour=h;
        min=m;
        sec=s;
    }

    AddTime addTime(AddTime t1,AddTime t2)
    {
       AddTime result;

        result.sec=t1.sec+t2.sec;
        result.min=result.sec/60;
        result.sec=result.sec%60;
        result.min+=t1.min+t2.min;
        result.hour=result.min/60;
        result.min=result.min%60;
        result.hour+=t1.hour+t2.hour;
        result.displayTime();
           return result;
    }
    friend class SubTime;
    // friend  SubTime::subTime(AddTime,SubTime);
    
};

class SubTime
{
    protected:
    int hour,min,sec;

    public:
    SubTime()
    {
    }

    SubTime(int h1,int m1,int s1)
    {
        hour=h1;
        min=m1;
        sec=s1;      
    }

     SubTime subTime(SubTime s1,AddTime s2)
    {
       SubTime result;

        result.sec-=s2.sec-s1.sec;
        result.min=result.sec/60;
        result.sec=result.sec%60;
        result.min-=s2.min-s1.min;
        result.hour=result.min/60;
        result.min=result.min%60;
        result.hour-=s2.hour-s1.hour;
        result.displayTime2();
        return result;
           
    }

    void displayTime2()
    {
        cout<<"Hour:"<<abs(hour)<<"\nMin:"<<abs(min)<<"\nSec:"<<abs(sec)<<endl;
    }
    friend class AddTime;
};

int main()
{
    AddTime a1(12,30,60),a2,a3;
    a2.setTime();
    a3.addTime(a1,a2);
    SubTime s(12,30,30),s2;
    s2.subTime(s,a2);

    return 0;
}
