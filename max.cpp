#include <iostream>
using namespace std;
inline int maximum(int a,int b,int c)
{
    if(a>b && a>c)
    {cout<<a<<" is maximum.\n";}

    else if(b>c && b>a)
    {cout<<b<<" is maximum.\n";}

    else 
    {cout<<c<<" is maximum\n";}
    
    return 0;
}

int main()
{
    int n1,n2,n3;
    cout<<"Enter any three numbers:";
    cin>>n1>>n2>>n3;
    cout<<maximum(n1,n2,n3);
    return 0;
}