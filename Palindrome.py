# Given a number n, check whether it is a palindrome or not.
n=input("enter a number: ")
l1=list(n)
l2=[]
for i in range(len(l1)-1,-1,-1):
    l2.append(l1[i])
if(l2==l1):
    print("the number is a palindrome")
else:
    print("the number is not a palindrome")
