# Given a number n, check whether it is a prime number or not.
a=int(input("Enter a number: "))
b=0
for i in range(2,a):
  if(a%i==0):
    b=b+1

if(b>=1):
    print("Number is not prime")
else:
    print("Number is a prime")
