for _ in range(int(input())):
  n = int(input())
  _n = int(str(n)[::-1])
  res = str(n + _n)
  print('YES' if res == res[::-1] else 'NO')
