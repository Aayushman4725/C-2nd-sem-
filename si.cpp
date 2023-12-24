#include <iostream>
using namespace std;
inline float SI(float p, float t, float r=12)
{
 return ((p*t*r)/100);
}

int main()
{
    int principle, time, rate, choice;
    cout<<"Enter the principle, time, rate:";
    cin>>principle>>time>>rate;
    cout<<"If you want a special rate choose 1:";
    cin>>choice;
    if(choice==1)
    cout<<"The SI of special rate is:"<<SI(principle,time,rate);
    else
    cout<<"The SI with regular rate is:"<<SI(principle,time);
   
    
}
