#Given n numbers sort them using Insertion Sort.
n=eval(input("Enter how many numbers"))
a=[]
for i in range(1,n+1):
  num=eval(input("Enter the number"))
  a.append(num)
  
  for j in range (1,len(a)):
    elem=a[j]
    k=j-1
    while(k>=0 and a[k]>elem):
      a[k+1]=a[k]
      k=k-1
      a[k+1]=elem
print(a)
