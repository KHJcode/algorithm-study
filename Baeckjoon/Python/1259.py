import sys

while 1:
  line = sys.stdin.readline().replace('\n', '')
  if line == '0':  break
  print('yes' if line == line[::-1] else 'no')
