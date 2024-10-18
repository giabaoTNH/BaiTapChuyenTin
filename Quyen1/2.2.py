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

# Ngay 18.10.2024
import math
from math import sqrt
#Nhap xuat
n = int(input())

#Phan tich n thanh thua so nguyen to
d = {}
sqrt_n = int(sqrt(n)) + 1
for i in range(2,sqrt_n):
    while(n%i == 0):
        if (i in d):
            d[i] += 1
        else:
            d[i] = 1
        n = n // i
if n > 1:
    if (n in d):
        d[n] += 1
    else:
        d[n] = 1
ans1=1
ans2=1
for x in d:
    print(x,d[x])
    ans1*=(d[x]+1)
    ans2*= (pow(x,d[x]+1) - 1) // (x-1)
print("So luong uoc:",ans1)
print("Tong cac uoc:",ans2)


