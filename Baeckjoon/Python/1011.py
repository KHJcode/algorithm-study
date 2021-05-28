def _1011_(a, b):
  point = 1
  count = 0
  while a < b:
    a += point
    count += 1
    if count % 2 == 0:  point += 1
  return count

n = int(input())

for _ in range(n):
  a, b = map(int, input().split())
  print(_1011_(a, b))
