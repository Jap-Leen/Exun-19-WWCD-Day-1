# Given a number n, check whether it is a prime number or not.
n=int(input("Enter a no. to check whether it is prime or not:"))
if (n>1):
  for i in range(2,n):
    if(n%i==0):
      print("The no. is not prime")
      break
    else:
      print("The no. is prime")
      break
else:
  print("The no. is not prime")
