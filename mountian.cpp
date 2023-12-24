#include <iostream>
#include<string.h>
using namespace std;
class Mountain;
void cmpheight(Mountain,Mountain);

class Mountain
{
    char name[50];
    int height;
    char location[50];

    public:
    void display();
    Mountain()
    {
    cin>>name;
    cin>>height;
    cin>>location;
    }
    Mountain(char *n, int h, char *ll)
    {
    strcpy(name,n);
    height=h;
    strcpy(location,ll);
    }
    friend void cmpheight(Mountain,Mountain);
};

void Mountain::display()
{
    cout<<"Name of Mountain:"<<name<<endl<<"Height of the mountain:"<<height<<"Location:"<<location<<endl;
}




void cmpheight(Mountain m1,Mountain m2)
{
    if(m1.height>m2.height)
    {
        m1.display();
    }
    else
    {
        m2.display();
    }
}

int main()
{
    Mountain m1;
    Mountain m2("Annapurna",8091,"Gandaki");
    cmpheight(m1,m2);
}