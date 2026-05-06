n = int(input())
n = "%.300f" % (1/(2**n))
n = n.rstrip('0').rstrip('.')
print(n)