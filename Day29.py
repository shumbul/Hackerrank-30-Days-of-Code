#!/bin/python3

import math
import os
import random
import re
import sys



if __name__ == '__main__':
    t = int(input())

    for t_itr in range(t):
        nk = input().split()

        n = int(nk[0])

        k = int(nk[1])
        maxi=0
        for i in range(max(2,k-1),n+1):
            for j in range(1,min(i,k)):
                temp=j&i
                if temp>maxi and temp<k:
                    maxi=temp
        print(maxi)
