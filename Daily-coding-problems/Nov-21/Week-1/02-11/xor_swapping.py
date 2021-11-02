def swap(a, b):
    a ^= b
    b ^= a
    a ^= b 
    return a, b 
a, b = (int(a) for a in input().split())
print(swap(a, b))
