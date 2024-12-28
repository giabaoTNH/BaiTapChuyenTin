#Ngu
a = input()
b = []
mp = [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 'A', 'B', 'C', 'D', 'E','F']

a = bool(len(a) % 4)*(4 - (len(a)%4))*'0' + a
i = len(a) - 1

while i>=0:
    d = 0
    for j in range(4):
        d += int(a[i]) << j
        i -= 1
    b.append(d)

for x in b[::-1]:
    print(mp[x],end='')

# Ngay 18.10.2024
n = input()
n = (bool(len(n)%4)*4 - (len(n)%4))*'0' + n

mp = ['0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F']
while (len(n) > 0):
    s = n[:4:]
    n = n[4::]
    d = 0
    for i in range(4):
        d+=pow(2,3-i)*int(s[i])
    print(mp[d],end='')

