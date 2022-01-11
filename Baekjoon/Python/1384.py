import sys

groups = []
n = -1

while 1:
  n = int(sys.stdin.readline())
  if n == 0:
    break
  group = []
  for _ in range(n):
    l = list(sys.stdin.readline().split())
    p = [l[0]]
    for r in range(1, len(l)):
      if l[r] == 'N':
        p.append(r)
    group.append(p)
  groups.append(group)

for i in range(len(groups)):
  print(f'Group {i + 1}')
  is_on = True
  for j in range(len(groups[i])):
    for k in range(1, len(groups[i][j])):
      is_on = False
      _j = j - groups[i][j][k]
      print(
          f'{groups[i][_j if _j > -1 else len(groups[i]) + _j][0]} was nasty about {groups[i][j][0]}')
  if is_on:
    print('Nobody was nasty')
  print()
