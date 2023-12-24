#include <iostream>
using namespace std;
class Time;

class Add
{
    public: 
    void add(Time,Time);
};

class Time
{
    int  hour,min,second;
    public:
    void setTime();
    void displayTime();
   friend void Add::add(Time,Time);

};
 void Add::add(Time t1,Time t2)
    {
        Time result;
       result.second=t1.second+t2.second;
        result.min=result.second/60;
        result.second=result.second%60;
        result.min+=t1.min+t2.min;
        result.hour=result.min/60;
        result.min=result.min%60;
        result.hour+=t1.hour+t2.hour;
        result.displayTime();
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
    Time t1,t2;
    Add t3;

    t1.setTime();
    t2.setTime();
    t1.displayTime();
    t2.displayTime();
    t3.add(t1,t2);
    return 0;
}