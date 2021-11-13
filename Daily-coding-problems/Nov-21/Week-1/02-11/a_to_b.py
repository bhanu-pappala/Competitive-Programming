def no_of_bits(a, b):
    return count_ones(a ^ b)

def count_ones(x):
    res = 0
    while x > 0:
        res += 1
        x &= x-1
    return res 

a, b = (int(x) for x in input().split())
print(no_of_bits(a, b))
