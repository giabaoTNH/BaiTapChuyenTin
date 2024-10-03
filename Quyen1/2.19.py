import math
from math import sqrt
n = int(input())
d = {}

for i in range(2,n+1):
    j = i
    sqrt_n = int(sqrt(j))+1
    for k in range (2,sqrt_n):
        while j % k == 0:
            if k in d:
                d[k] += 1
            else:
                d[k] = 1
            j = j // k
    if j > 1:
        if j in d:
            d[j] += 1
        else:
            d[j] = 1
a1 = 1
a2 = 1
for x in d:
    a1 *= d[x]+1
    a2 *= (pow(x,d[x]+1)-1)//(x-1)
print(a1,a2)
            
