// Given n numbers and a number k, write a program to search the number. k in the list using Binary Search algorithm.
#include<iostream>
using namespace std;

int Binary_search(int a[], int n, int m)
{
  int b, l, mid;
  b=0, l=n-1;
  while(b<=l)
  {
    mid=(b+l)/2;
    if(m==a[mid])
      return mid;
    else
      if(m>a[mid])
        b=mid+1;
    else
      l=mid-1;
  }
  return -1;
}

int main()
{ 
  int n, a[10], k, m;
  cout<<"Enter number of elements in the array (max. 10)";
  cin>>n;
 cout<<"Enter array elements (in ascending order) : \n";
 for(int i=0; i<n; i++)
   cin>>a[i];
    cout<<"Enter element to be searched for: ";
  cin>>m;
 k=Binary_search(a, n, m);
 if(k==-1)
 cout<<"Element not found!";
 else
 cout<<"Element found at index: "<<k<<", position: "<<k+1<<endl;
 return 0;
}

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
