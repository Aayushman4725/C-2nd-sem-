#include <iostream>
using namespace std;
inline int max(int x,int y);
{
    if(x>y)
    cout<<x<< "is maximum";

    else
    cout<<y<< "is maximum";
    return 0;
}
inline int max(int a,int b,int c);
{
    if(a>b && a>c)
    cout<<a<<"is maximum.";
    else if(b>a && b>c)
    cout<<b<< "is maximum.";
    else
    cout<<c<< "is maximum.";
    return 0;
}
inline int max(int d,int e,int f,int g,int h);
{
    if(d>e && d>>f && d>>g && d>>h)
    cout<<d << "is maximum";

    else if(e>d && e>f && e>g && e>h)
    cout<<e<< "is maximum";

    else if(f>d && f>e && f>g && f>h)
    cout<<f<< "is maximum";

    else if(g>d && g>e && g>f && g>h)
    cout<<g<< "is maximum";

    else
    cout<<h<< "is maximum";
    return 0;
    
}