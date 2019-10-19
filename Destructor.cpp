Write a class implementing destructor function.
#include<iostream>
#include<fstream>
using namespace std;
class A{
        int x,y;
        public:
        A() //constructor
        {
            cout<<"constructor invoked."<<endl;
            x=5;
            y=6;
        }
        void sum()
        { 
         int sum=x+y;
         cout<<"sum is "<<sum<<endl;
        }  
        ~A() //destructor
        {
            cout<<"destructor invoked.";
        }
};
int main()
{
    A a;
    a.sum();
}    
