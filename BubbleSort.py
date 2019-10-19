#Given n numbers sort them using Bubble Sort.
n=eval(input("Enter how many numbers"))
a=[]
for i in range(1,n+1):
  num=eval(input("Enter the number"))
  a.append(num)
  #Sorting
  for i in range(0,len(a)):
    for j in range(0,len(a)-1):
      if a[j]>a[j+1]:
        a[j],a[j+1]=a[j+1],a[j]
print(a)
