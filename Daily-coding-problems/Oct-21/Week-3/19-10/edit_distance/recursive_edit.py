t = dict()

def distance(a, b, i, j):
    if not (i, j) in t:
        if i == 0: t[(i, j)] = j
        elif j == 0: t[(i, j)] = i
        else:
            diff = 0 if a[i-1] == b[j-1] else 1
            t[(i, j)] = min(distance(a, b, i-1, j) + 1, distance(a, b, i, j-1) + 1, distance(a, b, i-1, j-1) + diff)

    return t[(i, j)]

print(distance(a="distance", b="editing", i=8, j=7))
