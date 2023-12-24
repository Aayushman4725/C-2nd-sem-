#include <iostream>
using namespace std;
inline int sum(int a,int b,int c=0,int d=0,int e=0)
{
    return (a+b+c+d+e);
}

int main()
{
    int n1,n2,n3,n4,n5;
    cout<<"Enter the five numbers to be added:";
    cin>>n1>>n2>>n3>>n4>>n5;
    
    cout<< "The sum of first two numbers is:"<<sum(n1,n2);
    
    cout <<"The sum of three numbers"<<n1<<","<<n2<<"and"<<n3<<"is"<<sum(n1,n2,n3);

    cout<<"The sum of "<<n1<<","<<n2<<","<<n3<<"and"<<n4<< "is:"<<sum(n1,n2,n3,n4);

    cout<<"The sum of "<<n1<<","<<n2<<","<<n3<<","<<n4<<"and"<<n5<<"is"<<sum(n1,n2,n3,n4,n5);

    return 0;
}