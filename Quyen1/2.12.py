# Test 198 OUT: 47
b = int(input())

prod = 5
d = 0
while prod <= b:
    d+=b//prod
    prod*=5

print(d)

## Ngay 18.10.2024
n = int(input())
cur = 5
ans = 0
while cur <= n:
    ans += n//cur
    cur *= 5
print(ans)

