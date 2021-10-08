# Checks whether the given set has a subset whose sum is "sum"

def sub_sum(arr, sum):
    n = len(arr)
    dp = [False for i in range(sum+1)]
    dp[0] = True

    for i in range(1, sum+1):
        dp[i] = arr[0] == i

    for i in range(1, n):
        for j in range(sum, -1, -1):
            if not dp[j] and j >= arr[i]:
                dp[j] = dp[j-arr[i]]

    return dp[sum]


print(sub_sum([1, 2, 3, 7], 6))
print(sub_sum([1, 2, 7, 1, 5], 10))
print(sub_sum([1, 3, 4, 8], 6))

