import sys

for i in range(3):
  n = int(sys.stdin.readline())
  sum = 0
  for j in range(n):
    t = int(sys.stdin.readline())
    sum += t
  print(0 if sum == 0 else ('+' if sum > 0 else '-'))
