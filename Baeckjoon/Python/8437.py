a = int(input())
b = int(input())
c = a // 2
d = a - c
c, d = max(c, d) + b // 2, min(c, d) - b // 2
print(c)
print(d)
