move_x = [-1, -2, -2, -1, 1, 2, 2, 1]
move_y = [-2, -1, 1, 2, 2, 1, -1, -2]
case = 0

scan = input()
x, y = ord(scan[0]) - 96, int(scan[1])

for i in range(8):
  _x = x + move_x[i]
  _y = y + move_y[i]
  if _y > 0 and _y < 9 and _x > 0 and _x < 9:
    case += 1

print(case)
