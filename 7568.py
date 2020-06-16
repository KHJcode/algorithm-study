mem = [list(map(int,input().split())) for _ in range(int(input()))]

for i in mem:
  rank = 1
  for j in mem:
    if i[0]<j[0] and i[1]<j[1]:  rank+=1
  print(rank, end=' ')
