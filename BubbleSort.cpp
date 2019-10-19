// Given n numbers, sort them using Bubble Sort
#include<iostream>
#include<fstream>
using namespace std;
int main()
{ int arr[10],n;
  cout<<"enter the number of elements in the array";
 cin>>n;
 cout<<"enter the elements"<<endl;
 for(int i=1;i<=n;i++)
 { 
   cin>>arr[i];
   cout<<endl;
 }
 for(int i=1;i<=n;i++)
 {
     for(int j=0;j<=n-1;j++)
     { if(arr[j]>arr[j+1])
     {
       int temp=arr[j];
       arr[j]=arr[j+1];
       arr[j+1]=temp;
     }
 }
}
 cout<<"the array in ascending order is";
 for(int i=0;i<n;i++)
 {
   cout<<arr[i];
 }
 
}
