from math import gcd
from math import lcm
n = int(input())
a = list(map(int,input().split()))
print(gcd(*a))
print(lcm(*a))

