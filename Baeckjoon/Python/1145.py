numbers = sorted(list(map(int, input().split())))
start = numbers[2] - 1
same = 0

while same < 3:
  same = 0
  start += 1
  for n in numbers:
    if start % n == 0:
      same += 1

print(start)
