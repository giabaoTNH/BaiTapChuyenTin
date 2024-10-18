k,n = map(int,input().split())
def toHopChap(k,n):
    if k == 0 or n == k:
        return 1
    if k == 1:
        return n
    return toHopChap(k-1,n-1) + toHopChap(k,n-1)
print(toHopChap(k,n))

## Ngay 18.10.2024
n,k = map(int,input().split())
c = []
# Cach khai bao mang 2 chieu
for i in range(n+1):
    row = [0]*(n+1)
    c.append(row)

c[1][0] = 1
c[1][1] = 1
for N in range(2,n+1):
    c[N][0] = 1
    c[N][N] = 1
    # Tam giac pascal
    # print(1,end = ' ')
    for K in range(1,N):
        c[N][K] = c[N-1][K-1] + c[N-1][K]
        # print(c[N][K],end = ' ')
    # print(1)
print(c[n][k])

