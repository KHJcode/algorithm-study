n = int(input())
m, d, s, j, c = 0, 0, 0, 0, 0

while n > m:
  j += 1
  c = (n + 1) * j
  m = c // n
  d = c % n
  if m == d:  s += c

print(s)
