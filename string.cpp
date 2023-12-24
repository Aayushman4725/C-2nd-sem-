#include <iostream>
#include <string.h>
using namespace std;

class String;
String operator+(String);

class String
{
    char str[50];

    public:
    String()
    {

    }

    String(const char s[])
    {
        strcpy(str,s);
    }

    void display()
    {
        cout<<"\nString:\n"<<str<<endl;
    }

    friend String operator+(String,String);
};

String operator+(String s1,String s2)
{
    char temp[50];
    String a;
    strcpy(temp.s2,a.str);
    strcat(temp.s2,s1.str);
    return temp;
}

int main()
{
    String s1("Aayushman"),s2("Amatya"),s3;
    s3=s1+s2;
    s3.display();
    return 0;
}