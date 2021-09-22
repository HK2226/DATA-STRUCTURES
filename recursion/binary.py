def binary(n):
    assert int(n)==n,"error"
    if n==0:
        return 0
    else:
        return (n%2 + 10*binary(n//2))

print(binary(int(input())))