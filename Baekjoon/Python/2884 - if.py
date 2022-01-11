import sys

a,b = map(int, sys.stdin.readline().split())

if b<45:
      if a == 0:
            a = 23
            b = 60 - (45-b)
      else:
            a -= 1
            b = 60 - (45-b)      
else:
      b -= 45

print(a,b)
