#include<iostream>
using namespace std;
 enum flag{False,True};
int main()
{
    int num;
   
    flag even;
    cout<<"Enter a number to check even or add:";
    cin>>num;
    if(num%2==0)
    even=True;
    else
    even=False;

    if(even)
    cout<<"The number is even";
    else
    cout<<"The number is odd ";

}
