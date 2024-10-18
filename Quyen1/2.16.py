## Ngay 18.10.2024
n = int(input())

c = []
for i in range(0,2*n+2):
    row = [0]*(2*n+1)
    c.append(row)

c[1][0] = 1
c[1][1] = 1
for i in range(2,2*n+1):
    c[i][0] = 1
    c[i][i] = 1
    for j in range(1,i):
        c[i][j] = c[i-1][j-1] + c[i-1][j]
print(c[2*n][n] // (n+1))


