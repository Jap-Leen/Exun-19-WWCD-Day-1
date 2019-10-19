Write a class implementing destructor function.
  #include<iostream>
#include<fstream>
using namespace std;
class A{
        int x;
        public:
        A() //constructor
        {
            cout<<"constructor invoked.";
        }
        ~A() //destructor
        {
            cout<<"destructor invoked.";
        }
};
int main()
{
    A a;
}    
