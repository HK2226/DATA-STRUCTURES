def sum(n):
    assert n>=0 and int(n)==n,"error"
    if n==0:
        return 0
    else:
        return n+sum(n-1)

print(sum(int(input())))