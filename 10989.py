import sys

array = [0] * 10001
for i in range(int(sys.stdin.readline())):  array[int(sys.stdin.readline())] += 1

for i in range(len(array)):
  if array[i] == 0:  continue
  for _ in range(array[i]):  print(i)