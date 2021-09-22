def power(n,m):
    assert m>=0 and int(m)==m,"error"
    if m==0:
        return 1
    else:
        return (n*power(n,m-1))

a,b=map(int,input().split())
print(power(a,b))