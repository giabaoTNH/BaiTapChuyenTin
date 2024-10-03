import math
from math import sqrt
n = int(input())
dick = {}

# Phan tich thua so nguyen to
sqrt_n = int(sqrt(n))+1
for i in range(2,sqrt_n):
    while n % i == 0:
        print(i,end=' ')
        n = n // i
        if (i in dick):
            dick[i] += 1
        else:
            dick[i] = 1

print()

#Dem uoc
d1 = 1
for sperm in dick:
    d1 *= dick[sperm] + 1
print(d1)

# Tong uoc
d2 = 1
for sperm in dick:
    tu *= pow(sperm,dick[sperm]+1) - 1
    mau *= sperm-1
    d2*= (pow(sperm,dick[sperm]+1)-1)//(sperm-1)
print(tu//mau, d2)

