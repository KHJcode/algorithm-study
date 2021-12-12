import sys

n = int(sys.stdin.readline())

for _ in range(n):
  a, b = map(int, sys.stdin.readline().split())
  _min = min(a, b)
  d = _min
  _max = max(a, b)
  while _max % d or _min % d:
    d -= 1
  print(a * b // d, d)
