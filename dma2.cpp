#include <iostream>
using namespace std;

int main()
{
    int *ptr=NULL;
    int size;

    cout<<"Enter size:";
    cin>>size;
    ptr=new int[size];

    cout<<"Enter"<<size<<"values"<<endl;
    for(int i=0;i<=size-1;i++)
    {
        cin>>*(ptr+i);
    }

    cout<<"\nThe values are:\n";

    for(int i=0;i<=size-1;i++)
    {
        cout<<*(ptr+1);
    }

    delete[]ptr;
    ptr=NULL;
    return 0;
}