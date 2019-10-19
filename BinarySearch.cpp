// Given n numbers and a number k, write a program to search the number. k in the list using Binary Search algorithm.

#include<iostream.h>
void main()
{
  int a[20],k,mid=0,f=0,i,n;
  cin>>n>>k;
  for(i=0;i<n;i++)
    cin>>a[i];
  int l=0,r=n-1;
  while(l<=r)
  {
    mid=(l+r)/2;
    if(k==a[mid])
    {f=1;
     break;
    }
    if(a[mid]<k)
    {
      l=mid+1;
    }
    if(a[mid]>k)
      r=mid-1;
  }
  if(f==0)
    cout<<"No. not found";
  else
    cout<<"found";
}

