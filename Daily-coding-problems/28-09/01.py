# Given a list of numbers, return whether any two sums to k.

# For example, given [10, 15, 3, 7] and k of 17, return true since 10 + 7 is 17.

def pair(arr, k):
    ht = []
    for i in arr:
        temp = k-i
        if temp in ht:
            return temp, i
        ht.append(i)
    return "NA"


print(pair([3, 18, 33, 25, 8, 22], 11))
