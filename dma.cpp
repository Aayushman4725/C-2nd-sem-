#include <iostream>
using namespace std;

int main()
{
    int *ptr=NULL;
    ptr=new int;

    cout<<"Enter a number:";
    cin>>*ptr;

    int *ptr2=NULL;
    ptr2=new int(500);

    cout<<"value at address pointed by ptr:"<<*ptr<<endl;
    cout<<"value at address pointed by ptr2:"<<*ptr2<<endl;
    delete ptr;
    delete ptr2;

    ptr=NULL;
    ptr2=NULL;
    return 0;
}