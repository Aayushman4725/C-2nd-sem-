#include <iostream>
using namespace std;

class Time
{
    int  hour,min,second;

    public:
    void setTime();
    void displayTime();
    void addTime(Time,Time);

};
 void Time::addTime(Time t1,Time t2)
    {
        second=t1.second+t2.second;
        min=second/60;
        second=second%60;
        min+=t1.min+t2.min;
        hour=min/60;
        min=min%60;
        hour+=t1.hour+t2.hour;
    }

 void Time::displayTime()
    {
      

        cout<<"The time is:"<<endl;
        cout<<"Hour"<<hour<<endl<<"Minute:"<<min<<endl<<"Second:"<<second<<endl;
    }

        void Time::setTime()
    {
        cout<<"Enter time:"<<endl;
        cout<<"Hour:";
        cin>>hour;
        cout<<"Minute:";
        cin>>min;
        cout<<"Second:";
        cin>>second;
    }

int main()
{
    Time t1,t2,t3;

    t1.setTime();
    t2.setTime();
    t1.displayTime();
    t2.displayTime();
    t3.addTime(t1,t2);
    t3.displayTime();
    return 0;
}