def sumn(n):
    assert n>=0 and int(n)==n,"error"
    if n==0:
        return 0
    else:
        return ((n%10)+sumn(n//10))

print(sumn(int(input())))