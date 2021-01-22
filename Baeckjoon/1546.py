n = int(input())
score = list(map(float, input().split()))
max_n = max(score)

for i in range(n):
      score[i] = score[i]/max_n*100

print(sum(score)/n)
