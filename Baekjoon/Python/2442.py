n = int(input())

for i in range(n):
  for j in range(n + i * 1):  print(' ' if n -1 * i -1 > j else '*', end='')
  print()
