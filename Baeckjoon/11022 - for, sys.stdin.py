import sys

n = int(input())

for i  in range(1, n+1, 1):
      a,b  = map(int,sys.stdin.readline().split())
      print("Case #{}: {} + {} = {}".format(i,a,b,a+b))
