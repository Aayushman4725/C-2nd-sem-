#include <iostream>
#include <string.h>
using namespace std;


class String
{
    char str[50];

    public:
    String()
    {}

    String(const char astr[])
    {
        strcpy(str,astr);
    }


    String operator+(String s)
{
    String temp;
    strcpy(temp.str,str);
    strcat(temp.str,s.str);
    return temp;
}

void display()
{
    cout<<"String:"<<str<<endl;
}
    
};


int main()
{
    String s1("Hello"),s2("World"),s3;
    s3=s1+s2;
    s3.display();
}
