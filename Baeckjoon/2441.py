n = int(input())

for i in range(n):
  str = ''
  for j in range(n):  str += ' ' if i > j else '*'
  print(str)
