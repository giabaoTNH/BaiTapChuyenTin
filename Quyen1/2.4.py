import math
from math import *
l, r = map(int, input().split())

isPrime = [True]*(r+1)
isPrime[0], isPrime[1] = False, False

for i in range(2,int(sqrt(r))):
    if isPrime[i]:
        j = i*i
        while j <= r:
            isPrime[j] = False;
            j+=i

for i in range(l, r+1):
    print(f'{i}: {isPrime[i]}')

