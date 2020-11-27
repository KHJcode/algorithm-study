def getAverageOverPercentage(n, score):
  avg = sum(score)/n
  std = 0

  for i in score:
    if i > avg:  std += 1

  return round(std/n*100, 3)



n = int(input())

for _ in range(n):
  data = list(map(int, input().split()))
  result = getAverageOverPercentage(data[0], data[1:])
  print("%.3f"%result + '%')
