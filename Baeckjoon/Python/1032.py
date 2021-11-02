import sys

n = int(sys.stdin.readline())
files = [sys.stdin.readline() for _ in range(n)]
string = list(files[0])

for i in range(len(string)):
  s = files[0][i]
  for filename in files[1:]:
    if filename[i] != s:
      string[i] = '?'
      break

print(''.join(string))
