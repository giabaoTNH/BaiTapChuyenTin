k,m,n = map(int,input().split())
print(pow(m,n,pow(10,k)))

# Ngay 18.10.2024
k,m,n=map(int,input().split())
a = str(pow(m,n,pow(10,k)))
a = (k-len(a))*'0' + a
print(a)


