import sys

total = 0

for i in range(4):  total += int(sys.stdin.readline())
print(f'{total // 60}\n{total % 60}')
