## Ngay 18.10.2024
a,b = map(int,input().split())
s = input()
n = len(s)
d=0

key = {'0':0, '1':1, '2':2, '3':3, '4':4, '5':5, '6':6,'7':7,'8':8,'9':9,'A':10,'B':11,'C':12,'D':13,'E':14,'F':15}
for i in range(n):
    d+=pow(a,n-1-i)*key[s[i]]

mp = ['0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F']
ans = []

while(d>0):
    ans.append(d%b)
    d = d//b
for i in reversed(ans):
    print(mp[i],end='')
print()

