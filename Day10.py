#!/bin/python3

import math
import os
import random
import re
import sys



if __name__ == '__main__':
    n = int(input())
    r=bin(n)
    #print(r)
    count=0
    max_count=0
    p=r[2:]
    #print(p)
    for i in range(len(p)):
        if p[i]=='1':
            count=1
            for j in range(i+1,len(p)) :
                if p[j]=='0':
                    break
                else :
                    count=count+1
        if count>max_count:
            max_count=count
    print(max_count)

