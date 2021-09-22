def GCD(m,n):
    assert int(m)==m and int(n)==n,"error"
    if m<0:
        m=m*-1
    if n<0:
        n=n*-1
    if n==0:
        return m
    else:
        return GCD(n,m%n)

a,b=map(int,input().split())

GCD(max(a,b),min(a,b))