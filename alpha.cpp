#include <iostream>
using namespace std;

class Alpha
{
    protected:
    int a;

    public:
    Alpha()
    {
    }

    Alpha(int a)
    {
        this->a=a;
        cout<<"\nParameterized Constructer of Alpha"<<endl;
    }

    void showa()
    {
        cout<<"\nValue of a="<<a<<endl;
    }
};

class Beta
{
    protected:
    int b;

    public:
    Beta()
    {  
    }

    Beta(int b)
    {
        this->b=b;
        cout<<"\nParameterized Constructor of Beta"<<endl;
    }

    void showb()
    {
        cout<<"\nValue of b="<<b<<endl;
    }
};

class Gamma:public Alpha,public Beta
{
    int c;

    public:
    Gamma()
    {   
    }

    Gamma(int a,int b,int c):Alpha(a),Beta(b)
    {
        this->c=c;
        cout<<"\nParameterized Constructor of Gamma"<<endl;
    }

    void showg()
    {
        showa();
        showb();
        cout<<"\nValue of c="<<c<<endl;
    }
};

int main()
{
    Gamma g1(10,20,30);
    g1.showg();
    return 0;
}