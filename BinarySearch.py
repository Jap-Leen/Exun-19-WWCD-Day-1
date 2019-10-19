
#Given n numbers and a number k, write a program to search the no. k in the list using Binary search algo.
n=int(input("how maany numbers?"))
l1=[]
for i in range(0,n):
  a=int(input("enter number: "))
  l1.append(a)
l1.sort()
k=int(input("enter element to be searched? "))
beg=0
end=len(l1)-1
flag=0
while(flag==0):
  mid=(beg+end)//2
  if(k==l1[mid]):
    flag=1
    break;
  elif(k>l1[mid]):
    beg=mid+1
  elif(k<l1[mid]):
    end=mid-1
print("element found @",mid,"position")
