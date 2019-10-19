// Given a number n, check whether it is a palindrome or not.
#include <iostream>
using namespace::std;

int count(int n)
{
  int i;
  for(i=0; n/10!=0;i++)
  return i;
}
    
int main()
{
  int n,n1,p,x[50], flag=0;
  cout<<"enter number you want to check:";
  cin>>n;
  n1=n;
  p = count(n);
  for(int i=1;i<=p;i++)
  {
    x[p-i]=n%10;
    n=n/10;
  }
  for(int i=0;i<p/2;i++)
  {
    if(x[i]!=x[p-i])
    {
      cout<<"number is not a palindrome";
      flag=1;
      break;
    }
    else
      continue;
  }
  if(flag==0)
    cout<<"number is a palindrome";
  return 0;
}
    
  
  
  
