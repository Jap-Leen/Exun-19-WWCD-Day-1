
#Given n numbers sort them using Bubble
n=eval(input("How many numbers do you want to enter: "))
b=[]
for i in range(1,n+1):
  c=int(input("Enter a number: "))
  b.append(c)
for i in range(0,len(b)):
  for j in range(0,len(b)-1):
    if(b[j]>b[j+1]):
      b[j],b[j+1]=b[j+1],b[j]
print("Sorted list: ",b)
  
  
