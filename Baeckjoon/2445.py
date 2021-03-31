n = int(input())
_r = n * 2

for i in range(1, _r):
  star = '*' * (_r - i) if i > n else '*' * i
  print(star + ' ' * abs(_r - (i * 2)) + star)
