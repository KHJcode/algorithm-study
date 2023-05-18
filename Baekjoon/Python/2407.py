n, m = map(int, input().split())
def fac(x):
    if x == 1:
        return 1
    return x * fac(x - 1)
print(fac(n) // (fac(n - m) * fac(m)))
