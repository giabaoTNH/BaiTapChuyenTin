# Test 198 OUT: 47
b = int(input())

prod = 5
d = 0
while prod <= b:
    d+=b//prod
    prod*=5

print(d)

