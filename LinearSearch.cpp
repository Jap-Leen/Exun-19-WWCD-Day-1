// Given n numbers and a number k, write a program to search the number k in the list using Linear Search algorithm.
#include<iostream>
using namespace::std;

int Linear_search(int a[], int n, int m)
{
  int flag=0;
  for(int i=0; i<n; i++)
    if(a[i]==m)
      flag++;
  
  return flag;
}
int main()
{ 
  int n, a[10], k, m;
  cout<<"Enter number of elements in the array (max. 10)  ";
  cin>>n;
 cout<<"Enter array elements (in ascending order): ";
 for(int i=0; i<n; i++)
   cin>>a[i];
    cout<<"Enter element to be searched for: ";
  cin>>m;
 k=Linear_search(a, n, m);
 if(k!=0)
 cout<<"Element found!";
 else
 cout<<"Element not found!";
 return 0;
}
