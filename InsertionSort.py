
#Given n numbers sort them using Insertion Sort.
l=list()
n=int(input("Enter the no. of elements"))
for x in range(n):
  a=int(input("Enter an element"))
  l.append(a)
print("The original list is",l)
for i in range(1,n):
  key=l[i]
  j=i-1
  while (j>=0 and key<l[j]):
        l[j+1]=l[j]
        j-=1
  l[j+1]=key
print("The sorted list is",l)
