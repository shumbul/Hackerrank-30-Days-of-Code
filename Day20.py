#!/bin/python3

import sys

n = int(input().strip())
a = list(map(int, input().strip().split(' ')))
# Write Your Code Here
numSwaps=0
for i in a:
    for j in range(0,len(a)-1):
        if a[j]>a[j+1]:
            temp=a[j]
            a[j]=a[j+1]
            a[j+1]=temp
            numSwaps+=1
    if numSwaps==0:
        break
print("Array is sorted in "+str(numSwaps)+" swaps.")
print("First Element: "+str(a[0]))
print("Last Element: "+str(a[len(a)-1]))

