// Given a number n, reverse its digits and print.
#include<iostream>

using namespace std;

int rev_digits(int n)
{
    int reverse=0,rem;
    while(n!=0)    
  {    
     rem=n%10;      
     reverse=reverse*10+rem;    
     n/=10;    
  }    
  cout<<" The reversed number is: "<<reverse;
}

int main()
{
  int n;
  cout<<"Enter a number: ";
  cin>>n;
  rev_digits(n);
  return 0;
}
