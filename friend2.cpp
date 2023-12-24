#include <iostream>
using namespace std;
class Time;
Time addTime(Time,Time);
class Time
{
    int  hour,min,second;

    public:
    void setTime();
    void displayTime();
    friend Time addTime(Time,Time);

};
     Time addTime(Time t1,Time t2)
    {
        Time result;
        result.second=t1.second+t2.second;
        result.min=result.second/60;
       result.second=result.second%60;
        result.min+=t1.min+t2.min;
        result.hour=result.min/60;
        result.min=result.min%60;
        result.hour+=t1.hour+t2.hour;
        return result;
    }

 void Time::displayTime()
    {
      

        cout<<"The time is:"<<endl;
        cout<<"Hour"<<hour<<endl<<"Minute:"<<min<<endl<<"Second:"<<second<<endl;
    }

        

int main()
{
    Time t1,t2,t3;

    t1.setTime(6,50,40);
    t2.setTime(9,40,30);
    t1.displayTime();
    t2.displayTime();
    t3=addTime(t1,t2);
    t3.displayTime();
    return 0;
}

void Time::setTime()
{
    int h,m,s;
    hour=h;
    min=m;
    second=s;
}