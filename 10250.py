T = int(input())
for i in range(T):
      H,W,N = map(int, input().split())
      ho = N//H+1
      floor = N%H
      if floor == 0:
            ho -= 1
            floor = H
      print(floor*100+ho)
