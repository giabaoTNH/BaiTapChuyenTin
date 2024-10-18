# Moi so nguyen >= 1 deu co the dc bieu dien
n = int(input())
f = [1]*2
while f[-1] <= n:
    f.append(f[-1]+f[-2])
f.pop()
while n > 0:
    if n - f[-1] < 0:
        f.pop()
        continue
    print(f[-1],end=' ')
    n-=f[-1]

##Ngay 18.10.2024
n = int(input())
f = [0]+[1]
while f[-1] <= n:
    f.append(f[-1]+f[-2])

#print(f)
while (n > 0):
    while (f[-1] > n):
        f = f[:-1]
    print(f[-1],end = ' ')
    n -= f[-1]
print()

