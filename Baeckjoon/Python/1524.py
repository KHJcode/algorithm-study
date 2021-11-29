import sys

t = int(sys.stdin.readline())
result = []

for _ in range(t):
  sys.stdin.readline()
  n, m = map(int, sys.stdin.readline().split())
  sejun = list(map(int, sys.stdin.readline().split()))
  sebi = list(map(int, sys.stdin.readline().split()))
  result.append('B' if max(sejun) < max(sebi) else 'S')

print('\n'.join(result))
