a,b = map(int,input().split())
fib = [1]*2
sum = (a==0)
while fib[-1] <= b:
    if fib[-1] >= a and fib[-1] <= b:
        sum+=1
    fib.append(fib[-1]+fib[-2])
print(sum)
# cach 2
f = [0]+[1]
a,b = map(int,input().split())
ans = (a==0)
while f[-1] <= b:
    f.append(f[-1]+f[-2])
    if (f[-1] >= a and f[-1] <=b):
        ans+=1

print(ans)
# cach 3
a,b = map(int,input().split())
t1=0
t2=1
f = 1
ans = 0
while(f <= b):
    if (f >= a and f<= b ):
        ans+=1
    f = t1+t2
    t1 = t2
    t2 = f
print(ans)



