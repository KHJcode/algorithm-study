import sys
import re
code = sys.stdin.readlines()
for line in code:
  d = line
  while d.find('BUG') != -1:
    d = re.sub('BUG', '', d)
  print(d, end='')
