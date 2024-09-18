a,b = map(int,input().split())
fib = [1]*2
sum = 0
while fib[-1] <= b:
    if fib[-1] >= a and fib[-1] <= b:
        sum+=1
    fib.append(fib[-1]+fib[-2])

print(sum)
print(fib)

