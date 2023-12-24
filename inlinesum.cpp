#include <iostream>
using namespace std;
inline int add(int n1,int n2);
{
    return (n1+n2);
}

int main()
{
    int a,int b;
    cout<<"Enter the two numbers:";
    cin>>a>>b;
    cout<<"The sum is:"<<add(a,b);
    return 0;
}