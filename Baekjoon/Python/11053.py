n = int(input())
a = list(map(int, input().split()))
dp = [1] * n

for i in range(1, len(a)):
  for j in range(i - 1, -1, -1):
    if a[j] == a[i]:
      dp[i] = max(dp[i], dp[j])
    if a[j] < a[i]:
      dp[i] = max(dp[i], dp[j] + 1)

print(max(dp))
print(dp)
