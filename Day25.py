# Enter your code here. Read input from STDIN. Print output to STDOUT
import math
def prime(a):
    flag=0
    i=0
    for i in range(2,int(math.sqrt(a))+1):
        if a%i==0:
            print("Not prime")
            flag=1
            break
    if flag==0:
        print("Prime")

n=int(input())
for i in range(0,n):
    a=int(input())
    if a<2:
        print("Not prime")
    else:
        prime(a)
