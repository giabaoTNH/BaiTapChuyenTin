import math
from math import sqrt
n = int(1e6)+7

isPrime = [False]*2 + [True]*n
sqrt_n = int(sqrt(n))+1

for i in range(2,sqrt_n):
    if (isPrime[i] == True):
        for j in range(i*i,n,i):
            isPrime[j] = False

d = 0
for i in range(1, int(1e6)+1):
    check1 = pow(2,i,i) == 2
    check2 = isPrime[i]
    if check1 != check2:
        print(i, check1, check2)
        d+=1
print('---')
print(d)
