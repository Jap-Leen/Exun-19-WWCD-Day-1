// Given a number n, print the first 'n' prime numbers.
#include<iostream>
using namespace std;

int main()
{
  int n,chk=0;
  cout<<"enter the number";
  cin>>n;
  for(int i=2;i<n;i++){
      chk=0;
  
    for(int j=2;j<i-1;j++)
    {

      if(i%j==0)
      { 
        chk=1;
        break;
      } 

    }
    if(chk==0)
       cout<<i<<endl;
  }
    return 0;
  } 
  
