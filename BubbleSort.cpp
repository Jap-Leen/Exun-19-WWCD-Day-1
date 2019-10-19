// Given n numbers, sort them using Bubble Sort
#include<iostream.h>
void main()
{
  int i,j,a[20],n,t=0;
  cin>>n;
  for(i=0;i<n;i++)
    cin>>a[i];
  for(i=0;i<n;i++)
  {
    for(j=0;j<n-i;j++)
    {
      if(a[j]>a[j+1])
      {
        t=a[j];
        a[j+1]=a[j];
        a[j]=t;
      }
    }
  }
  for(i=0;i<n;i++)
    cout<<a[i];
}
