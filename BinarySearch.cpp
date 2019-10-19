// Given n numbers and a number k, write a program to search the number. k in the list using Binary Search algorithm.
#include<iostream>
using namespace::std;

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
  cout<<"Enter number of elements in the array (max. 10): ";
  cin>>n;
 cout<<"Enter array elements (in ascending order): \n";
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
