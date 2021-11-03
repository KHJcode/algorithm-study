import sys

n, m = map(int, sys.stdin.readline().split())
castle = [list(sys.stdin.readline())[:-1] for _ in range(n)]
row = 0
col = 0

for i in range(n):
  if str(castle[i]).count('X') == 0:
    row += 1

for i in range(m):
  cnt = 0
  for j in range(n):
    if castle[j][i] == 'X':
      cnt += 1
      break
  if cnt == 0:
    col += 1

print(max(row, col))
