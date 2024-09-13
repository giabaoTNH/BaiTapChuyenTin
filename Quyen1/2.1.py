a = input()
n = 0
d = 0
b = []
mp = [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 'A', 'B', 'C', 'D', 'E','F']
for c in reversed(a):
    n += int(c)*(2**d)
    d+=1
while n > 0:
    b.append(n%16)
    n = n//16
for x in reversed(b):
    print(mp[x],end='')

