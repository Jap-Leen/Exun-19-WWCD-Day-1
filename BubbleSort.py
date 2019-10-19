#Given n numbers sort them using Bubble Sort.
l1=[]
n=int(input("enter number of items: "))
for i in range(n):
    a=int(input("enter number: "))
    l1.append(a)
n=len(l1)
for i in range(0,n):
  for j in range(0,n-i-1):
    if(l1[j]>l1[j+1]):
      l1[j],l1[j+1]=l1[j+1],l1[j]
print("the sorted items are:")
for i in l1:
    print(i)
