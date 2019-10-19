# Given a number n, check whether it is a prime number or not.
n=int(input("Enter the no."))
factor=0
for i in range(2,n+1):
  if n%i==0:
    factor+=1
if factor>=2:
  print("The number is not prime")
else:
  print("The number is prime")
    
