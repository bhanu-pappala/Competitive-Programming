def sieve(n):
    prime = [True for i in range(n+1)]
    i = 2
    while i ** 2 <= n:
        if prime[i] == True:
            for j in range(i ** 2, n+1, i):
                prime[j] = False
        i += 1
    prime[0], prime[1] = False, False

    res = []
    for i in range(n+1):
        if prime[i]:
            res.append(i)

    return res

# product of digits that is equal to given number
def product_of_digits(n):
    primes = sieve(n)
    temp = n
    s = ""
    prod = 1
    for i in primes:
        while n % i == 0:
            prod *= i
            s += str(i) + ","
            if prod == temp:
                break
            n /= i
    return s[:-1]


n = int(input())
print(product_of_digits(n))
