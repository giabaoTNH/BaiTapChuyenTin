k,n = map(int,input().split())
def toHopChap(k,n):
    if k == 0 or n == k:
        return 1
    if k == 1:
        return n
    return toHopChap(k-1,n-1) + toHopChap(k,n-1)
print(toHopChap(k,n))


