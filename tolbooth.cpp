#include <iostream>
using namespace std;

class TolBooth
{
    int car;
    double money;

    public:
    TolBooth()
    {
        car=0;
        money=0;
    }

    void payingCar()
    {
        car++;
        money+=5;
    }

    void noPayCar()
    {
        car++;
    }

    void display()
    {
        char input;
        cout<<"Press a for paying car and Press b for non paying car:";
        cin>>input;
        switch(input)
        {
           case 'a':
           {
            cout<<"Total amount of cars:"<<car<<endl;
            cout<<"Total amount paid:"<<money<<endl;
           }break;

           case 'b':
           {
            cout<<"Total amount of cars:"<<car<<endl;
           }break;
        }
    }
};

int main()
{
    int size,i,choice;
    TolBooth t1;
   
    while(choice!=3)
    {
        
     cout <<"Enter 1 for a paying car, 0 for  non paying car, 2 to display information and 3 to quit";
    cin>>choice;
    
    if(choice==1)
    {
       
            t1.payingCar();
    
    }

    else if (choice == 2) {
    t1.display();
    }

    else if(choice==0)
    {
       
            t1.noPayCar();
        
    }

   
    }


    t1.display();
      
        return 0;
    
}