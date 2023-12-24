#include <iostream>
using namespace std;
inline int circle( float r,float area, float circumference)
{
   area=3.14*(r*r);
   circumference=2*3.14*r; 
   cout<<"area="<<area<<endl<<"circumfernce"<<circumference;
   return 0;
}

int main()
{
    int radius,a,c;
    cout<<"Enter the radius:";
    cin>>radius;
    cout<<"The area and circumference are:";
    circle(radius,a,c);
    return 0;
}