def solve_knapsack(profits, weights, capacity):
    return recursive_knapsack(profits, weights, capacity, 0)


def recursive_knapsack(profits, weights, capacity, index):
    if capacity < 1 or index >= len(profits):
        return 0
    profit = 0
    if weights[index] < capacity:
        profit = profits[index]+recursive_knapsack(profits, weights, capacity-weights[index], index+1)
    return max(recursive_knapsack(profits, weights, capacity, index+1), profit)


print(solve_knapsack([1, 6, 10, 16], [1, 2, 3, 5], 7))
print(solve_knapsack([1, 6, 10, 16], [1, 2, 3, 5], 6))

