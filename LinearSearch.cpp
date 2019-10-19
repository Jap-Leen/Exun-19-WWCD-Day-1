// Given n numbers and a number k, write a program to search the number k in the list using Linear Search algorithm.
#include <iostream>
using namespace::std;

int ls(int n[], int k)
{
  for(int i=0; i<50; i++)
  {
    if (n[i]==k)
      return i;
  }
}

void main()
{
  int x[50],n,p;
  cout<<"enter numbers";
  for(int i=0; i<50; i++)
  {
    cin>>x[i];
    if(x[i]=="00";
       break;
  }
  cout<<"enter number you wish to search";
  cin>>n;
  p= ls(x[50],n);
  cout<<"position is="<<p;
 }
