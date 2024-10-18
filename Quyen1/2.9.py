from math import gcd
from math import lcm
n = int(input())
a = list(map(int,input().split()))
print(gcd(*a))
print(lcm(*a))

#Ngay 18.10.2024
n = int(input())
a = list(map(int,input().split()))

def ucln(a,b):
    while b>0:
        t = a%b
        a = b
        b = t
    return a
def bcnn(a,b):
    return (a*b)//ucln(a,b)
up = a[-1]
prod = 1
for x in a:
    u = ucln(x,up)
    b = bcnn(prod,x)
    up = u
    prod = b
print("UCLN:",up)
print("BCNN:", prod)


