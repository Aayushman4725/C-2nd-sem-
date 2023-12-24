#include <iostream>
using namespace std;

struct Volume
{
    private:
    float length;
    float breadth;
    float height;

    public:
    void setdetails();
    void displaydetails();

};

void Volume::setdetails()
{
    cout<<"Enter length:";
    cin>>length;
    cout<<"Enter breadth:";
    cin>>breadth;
    cout<<"Enter height:";
    cin>>height;
}

void Volume::displaydetails()
{
    cout<<"Length:"<<length;
    cout<<"\nBreadth:"<<breadth;
    cout<<"\nheight:"<<height;
}

void 