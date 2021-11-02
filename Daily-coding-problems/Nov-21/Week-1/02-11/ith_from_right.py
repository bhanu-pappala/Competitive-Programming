def set_ith(n, i):
    n |= 1 << i
    return n

n, i = (int(x) for x in input().split())
print(set_ith(n, i))
