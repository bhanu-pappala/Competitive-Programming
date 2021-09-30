# Given an array of integers, return a new array such that each element at index i of the new array is the product of all the numbers in the original array except the one at i.

# For example, if our input was [1, 2, 3, 4, 5], the expected output would be [120, 60, 40, 30, 24]. If our input was [3, 2, 1], the expected output would be [2, 3, 6].

# Using division
def fn(arr):
    total = 1
    for i in arr:
        total *= i

    result = []
    for i in arr:
        result.append(total//i)
    return result

# Without division
def fn2(arr):
    ht = []
    for i in arr:
        prod = 1
        for j in range(len(arr)):
            if i == arr[j]:
                continue
            else:
                prod *= arr[j]
        ht.append(prod)
    return ht

arr = [int(x) for x in input("Enter the array: ").split()]
print(fn(arr))
print(fn2(arr))


