def f(n):
    if int(n) == 9:
        return True
    if int(n) < 9:
        return False
    sum = 0
    for x in n:
        sum += int(x)
    return f(str(sum))

n = input()
if f(n):
    print(f'{n} la so dep')
else:
    print(f'{n} khong la so dep')

