m = int(input())
ans = int(1e9)
for i in range(1001):
    k = m-i
    n = k
    s = 0
    while (n > 0):
        s += n%10
        n = n//10

    if (s == i):
        ans = min(ans,k)
print(ans)
