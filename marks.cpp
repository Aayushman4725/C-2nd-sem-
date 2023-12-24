#include <iostream>
using namespace std;

class Total;

class Practical
{
    int practical;

    public:
    void setPratical()
    {
        practical=50;
    }

    friend class Total;
};

class Theory
{
    int theory;

    public:
    void setTheory()
    {
        theory=50;
    }

    friend class Total;
};

class Total
{
    int total;

    public:
    void display(Theory t,Practical p)
    {
    t.setTheory();
    p.setPratical();
    total=t.theory+p.practical;
    cout<<"Total: "<<total<<endl;
    }
};

int main()
{
    Theory t;
    Practical p;
    Total t1;
    t1.display(t,p);
    return 0;
}