n = int(input())
count = 1
_n = int(str(n % 10) + str((n // 10 + n % 10) % 10))

while _n != n:
  count += 1
  _n = int(str(_n % 10) + str((_n // 10 + _n % 10) % 10))

print(count)
