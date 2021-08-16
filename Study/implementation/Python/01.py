x, y = 1, 1
mode = ['L', 'R', 'U', 'D']
move_x = [0, 0, -1, 1]
move_y = [-1, 1, 0, 0]

n = int(input())
plan = list(input().split())

for s in plan:
  i = mode.index(s)
  if s == mode[i]:
    _x = x + move_x[i]
    _y = y + move_y[i]
    if _x < 1 or _x > n or _y < 1 or _y > n:
      continue
    x, y = _x, _y

print(x, y)
