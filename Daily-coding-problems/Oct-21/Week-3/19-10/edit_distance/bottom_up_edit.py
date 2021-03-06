def distance(a, b):
    t = [[float("inf") for _ in  range(len(b)+1)] for _ in range(len(a)+1)]

    for i in range(len(a)+1):
        t[i][0] = i

    for j in range(len(b)+1):
        t[0][j] = j

    for i in range(1, len(a)+1):
        for j in range(1, len(b)+1):
            diff = 0 if a[i-1] == b[j-1] else 1
            t[i][j] = min(1+t[i-1][j], 1+t[i][j-1], diff+t[i-1][j-1])

    return t[len(a)][len(b)]

print(distance(a="distance", b="editing"))
