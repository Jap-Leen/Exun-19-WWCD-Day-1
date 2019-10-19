// Given n numbers and a number k, write a program to search the number. k in the list using Binary Search algorithm.
#include<iostream>
using namespace::std;

int main()
{ 
    system("cls");
  int n, a[10], k, m;
  cout<<"Enter number of elements in the array (max. 10) (in ascending order) ";
  cin>>n;
 cout<<"Enter array elements: ";
 for(int i=0; i<n; i++)
   cin>>a[i];
    cout<<"Enter element to be searched for";
  cin>>n;
 k=binary_search(a, n, m);
 if(k==0)
 cout<<"Element found!";
 else
 cout<<"Ëlement not found!";
 return 0;
}
