#include<iostream>
using namespace std;
enum Day{sun,mun,tue,wed,thu,fri,sat};
int main()
{
    
    Day day1,day2;
    int mid_day;
    day1=sun;
    day2=sat;
    mid_day=wed;
    cout<<"day1="<<day1<<endl<<"day2="<<day2<<endl<<"Mid_day:"<<mid_day<<endl;
    return 0;
}