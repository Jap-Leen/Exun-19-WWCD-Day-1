// Given a number n, check whether it is a prime number or not.
#include<iostream>

using namespace std;

int is_prime(int n)
{
  int flag=0;
  for(int i=2; i<=n/2; i++)
    if(n%i==0)
      flag++;
  return flag;
}

int main()
{
  int n, k;
  cout<<"\n Enter the number to be checked: ";
  cin>>n;
  if(n==1)
  {
    cout<<"\n Neither prime nor composite. Unique number.\n ";
    return 0;
  }
  k=is_prime(n);
  if(k<1)
    cout<<"\n Prime number\n ";
    else
      cout<<"\n Composite number\n ";
  return 0;
}
