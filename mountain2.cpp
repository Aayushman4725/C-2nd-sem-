#include <iostream>
#include <string.h>
using namespace std;

 

class Mountains
{
    char name[50];
    char location[50];
    int height;
    public:
    Mountains(){
        cout<<"Enter the name of the mountain: ";
        cin>>name;
        cout<<"Enter the height of the mountain: ";
        cin>>height;
        cout<<"Enter the location of the mountain: ";
        cin>>location;
    }
    Mountains(char *n, int h, char *l)
    {   
        strcpy(name,n);
        height = h;
        strcpy(location,l);
    }
    void display();
    friend void compare(Mountains, Mountains);
};

    void compare(Mountains m1, Mountains m2)
    {
        if (m1.height > m2.height)
        {
            cout<<m1.name<<" has the greatest height";
            m1.display();
        }
        else {
            cout<<m2.name<<" has the greatest height";
            m2.display();
        }
    }
    void Mountains::display()
    {
        cout<<"\n The location of the mountain is: "<<location;
        cout<<"\n The height of the mountain is: "<<height;
    }

int main() {
    Mountains m1;
    Mountains m2("Everest",8848,"Manpark");
    compare(m1,m2);
    return 0;
}

