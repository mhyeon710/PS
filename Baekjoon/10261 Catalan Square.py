def catalan(prev, n):
    return prev * (4 * n - 2) // (n + 1)

def catalan_square(n, cat_numbs):
    return sum(cat_numbs[i] * cat_numbs[n - i] for i in range(n + 1))

n = int(input())
cat_numbs = []
for i in range(n + 1):
    if i == 0 or i == 1:
        cat_numbs.append(1)
    else:
        cat_numbs.append(catalan(cat_numbs[i - 1], i))

result = catalan_square(n, cat_numbs)
print(result)