n = int(input())

for i in range(n):
  for j in range(n * 2 - 1 * i - 1):  print('*' if i <= j else ' ', end='')
  print()
