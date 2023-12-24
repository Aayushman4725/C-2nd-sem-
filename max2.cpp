#include <iostream>
using namespace std;
inline int max(int a,int b,int c=0, int d=0,int e=0)
{
    if(a>b && a>c && a>d && a>e)
    cout<<a <<"is maximum";

    else if(b>a && b>c && b>d && b>e)
    cout<<b <<"is maximum\n";

    else if(c>a && c>b && c>d && c>e)
    cout<<c <<"is maximum\n";

    else if(d<a && d<b && d<c && d>e)
    cout<<d <<"is maximum\n";

    else
    cout<<e <<"is maximum\n";

    return 0;
}

int main()
{
    int n1,n2,n3,n4,n5;
    cout<<"Enter the five numbers:";
    cin>>n1>>n2>>n3>>n4>>n5;

    cout<<max(n1,n2,n3,n4,n5);
    return 0;
}