n = int(input())
_r = n * 2

for i in range(1, _r):
  star = ' ' * abs(n - i) + '*' * (((_r - i) * 2 if i > n else i + i) - 1)
  print(star)
