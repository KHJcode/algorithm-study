n = int(input())
for i in range(n):
      score = list(map(int,input().split()))
      avg = sum(score[1:])/score[0]
      add = 0
      for j in score[1:]:
            if j > avg:
                  add += 1
      print("%.3f"%round((add/score[0])*100, 3)+"%")
